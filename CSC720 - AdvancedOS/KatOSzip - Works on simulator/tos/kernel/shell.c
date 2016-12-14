#include <kernel.h>
#define MAX_PROCS 20

PORT shell_port;
WINDOW shell_wnd = {0, 0, 61, 25, 0, 0, 0xDC};
WINDOW barrier = {48, 0, 49, 25, 0, 0, ' '};
WINDOW train_wnd = {50, 0, 61, 25, 0, 0, ' '};

void ClearMemBuffer();
void SendCmdToTrain(char* cmd);
int SendCmdToCom(char* cmd, char* input_buf, int len_input_buf);
int probeTrackSection(char* trackSection);
void TrainSwitch(char switch_num, char position);
void SetOuterTrack();
void DirectionCmd();
void SwitchTrainDirection();
void setTrainSpeed(char speedCmd);
void send_cmd_to_com(char* cmd);
void config1(int hasZamboni);
void config2(int hasZamboni);
void config3();
void config4();
int CheckTrackForTrain(char* trackSection);

//this is my StrCmp, it compares the entire string passed in.
int compare_strings(const char* string1, const char* string2)
{
	int index = 0;
	int returnVal = 1;

	//check to see if the contents of the string is equal.
	while(string1[index] != 0 || string2[index] != 0)
	{
		if(string1[index] != string2[index])
		{
			returnVal = 0;
		}
		index++;
	}
	
	//Return 1 strings are equal. (true)
	//Return 0 strings not equal. (false)
	return returnVal;
}

//this is a StrCmpN function. Compares the characters up until n.
int MyStrCmp(const char* str1, const char* str2, int n)
{
	int index = 0;
	while(index < n)
	{
		if(str1[index] != str2[index])
		{
			return 0;
		}
		index++;
	}
	return str2[index] == '\0';
}

void cmd_startTrain()
{
	init_train(&train_wnd);
}

//Will print text explaining all supported TOS commands.
void cmd_help()
{
	wprintf(&shell_wnd, "help ---> lists all supported TOS commands.\n");
	wprintf(&shell_wnd, "cls  ---> Clears the screen of all text.\n");
	wprintf(&shell_wnd, "echo ---> Prints the arguement to the console.\n");
	wprintf(&shell_wnd, "ps   ---> Prints the name of all the processes.\n");
	wprintf(&shell_wnd, "ps -d---> Prints a detailed process table.\n");
	wprintf(&shell_wnd, "about---> Prints information about Kat OS.\n");
	wprintf(&shell_wnd, "run  ---> Runs the train program.\n");
}

//Clears the screen of all text.
void cmd_cls()
{
	clear_window(&shell_wnd);
}

//Prints to the console the arguement of the command.
void cmd_echo(const char* string)
{
	wprintf(&shell_wnd, string);
	wprintf(&shell_wnd, "\n");
}

//Prints out the names of all the processes. (Only names!)
void cmd_ps()
{
	wprintf(&shell_wnd, "Process name\n");
   	wprintf(&shell_wnd, "------------------------------------------------");

    	int i;
    	PCB* p = pcb;
    
    	for (i = 0; i < MAX_PROCS; i++, p++) 
	{
		if (!p->used)
		{
	   		continue;
		}
		wprintf(&shell_wnd, "\n");
		wprintf(&shell_wnd, p->name);
    	}
	wprintf(&shell_wnd, "\n");
}

//Prints out a detailed process table.
void cmd_psd()
{
	print_all_processes(&shell_wnd);
}

//Prints out information about the writer of KKOS
void cmd_about()
{
	wprintf(&shell_wnd, "Kat OS.\n");
}

void DoCommand(const char* cmd, int cmdlen, const char* params)
{
	if(MyStrCmp(cmd, "echo", cmdlen))
	{
		cmd_echo(params);
	}
	else if(MyStrCmp(cmd, "about", cmdlen))
	{
		cmd_about();
	}
	else if(MyStrCmp(cmd, "help", cmdlen))
	{
		cmd_help();
	}
	else if(MyStrCmp(cmd, "run", cmdlen))
	{
		cmd_startTrain(&train_wnd);
	}
	else if(MyStrCmp(cmd, "ps", cmdlen) && compare_strings(params, " -d"))
	{
		cmd_psd();
	}
	else if(MyStrCmp(cmd, "ps", cmdlen))
	{
		cmd_ps();
	}
	else if(MyStrCmp(cmd, "cls", cmdlen))
	{
		cmd_cls();
	}
	else if(MyStrCmp(cmd, "reverse", cmdlen))
	{
		SwitchTrainDirection();
	}
	else if(MyStrCmp(cmd, "speed5", cmdlen))
	{
		setTrainSpeed('5');
	}
	else if(MyStrCmp(cmd, "speed0", cmdlen))
	{
		setTrainSpeed('0');
	}
	else if(MyStrCmp(cmd, "switchDirec", cmdlen))
	{
		DirectionCmd();
	}
	else
	{
		wprintf(&shell_wnd, "Unknown command\n");	
	}
}

void ProcessInput(const char* input)
{
	int length = 0;
	
	while(*input == ' ')
	{
		input++;
	}

	while(input[length] != ' ' && input[length] != '\0')
	{
		length++;
	}

	DoCommand(input, length, input + length);
}

void reset_buffer(char* buffer)
{
	//*buffer = NULL;
	int length = k_strlen(buffer);
	for(int i = 0; i < length; i++)
	{
		buffer[i] = '\0';
	}
}

void print_barrier()
{
	for(int i = 0; i < 25; i++)
	{
		wprintf(&barrier, "|\n");
	}
}

void shell_process(PROCESS self, PARAM param)
{
	char ch;
	Keyb_Message msg;

	//Clear the OS shell.
	clear_window(&shell_wnd);
	clear_window(&train_wnd);
	clear_window(&barrier);
	print_barrier();
	wprintf(&shell_wnd, "Kat OS\n");
	wprintf(&train_wnd, "Train window\n");
	
	//allow the user to enter 64 characters. If I need to expand this I will.
	char commandBuffer[128] = "";
	int buffer = 0;

	while(1)
	{
		//read command from keyboard
		//when user hits enter execute command.
		
		//send the keyboard a message asking for the next key press.
		msg.key_buffer = &ch;
		send(keyb_port, &msg);
	
		//read backspace and there is stuff in the commandBuffer
		if(ch == '\b')
		{
			if(buffer == 0)
			{
				continue;
			}
			else
			{
				commandBuffer[buffer - 1] = '\0';    //Null character
				buffer--;		       //Remove 1 from buffer to match up
				wprintf(&shell_wnd, &ch);
			}
		}
		else if(ch != 13)
		{
			//Only call addToArray when the buffer is not exceeded.
			//add character to userCommand char array
			if(buffer < 127)
			{
				//len = strlen(commandBuffer);
				commandBuffer[buffer] = ch;
				commandBuffer[buffer + 1] = '\0';
				buffer++;
				wprintf(&shell_wnd, &ch);
			}
			else
			{
				wprintf(&shell_wnd, "\nBuffer overflow, command too long. Reseting buffer.\n");
				reset_buffer(commandBuffer);
				buffer = 0;
			}
		}
		else if(ch == 13)
		{
			//wprintf(&shell_wnd, "\nExecuting command . . . ");
			//wprintf(&shell_wnd, &commandBuffer[0]);
			wprintf(&shell_wnd, "\n");			
			ProcessInput(commandBuffer);

			reset_buffer(commandBuffer);
			buffer = 0;
		}
	}
}

void init_shell()
{
	shell_port = create_process(shell_process, 6, 0,"Shell Process");
}
