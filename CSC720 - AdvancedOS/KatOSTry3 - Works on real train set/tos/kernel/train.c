
#include <kernel.h>

//**************************
//run the train application
//**************************
PORT train_port;
WINDOW train_wnd;

//set zamboni to reverse direction
//find wagon and train
//run config1
//run config2
//run config3
//run config4


#define WAIT_TIME 10
#define mem_cmd "R\015"

typedef struct
{
	int wagon;
	int train;
	int zamRotation; //1 means ClockWise, 0 means Counter-ClockWise
}location;

void ClearMemBuffer();
void SendCmdToTrain(char* cmd);
int SendCmdToCom(char* cmd, char* input_buf, int len_input_buf);
int probeTrackSection(char* trackSection);
void TrainSwitch(char switch_num, char position);
void SetOuterTrack();
void DirectionCmd();
void SwitchTrainDirection();
void setTrainSpeed(char speedCmd);
location FindWagonAndTrain();
void send_cmd_to_com(char* cmd);
void config1(int hasZamboni);
void config2(int hasZamboni);
void config3();
void config4();
void SelectConfig(location loc);
int CheckTrackForTrain(char* trackSection);

//void send_cmd_to_com (char* cmd)

//Takes care of all other commands.
void SendCmdToTrain(char* cmd)
{
	sleep(WAIT_TIME);
	ClearMemBuffer();
	sleep(WAIT_TIME);
	send_cmd_to_com(cmd);
}

//Takes care of probing the track section.
int SendCmdToCom(char* cmd, char* input_buf, int len_input_buf)
{
	int returnValue = 0;

	COM_Message msg;
	msg.input_buffer = input_buf;
	msg.len_input_buffer = len_input_buf;
	msg.output_buffer = cmd;
	
	wprintf(&train_wnd, "Probing track %s\n", &cmd[0]);
	sleep(WAIT_TIME);
	ClearMemBuffer();
	sleep(WAIT_TIME);
	//wprintf(&train_wnd, "Before Send\n");
	send(com_port, &msg);
	//wprintf(&train_wnd, "After Send\n");

	if(msg.input_buffer[1] == '1')
	{
		returnValue = 1;
	}

	return returnValue;
}

//****************These functions below take care of formatting and passing commands to the COM****************
//switch directions
void SwitchTrainDirection()
{
	//stop train.
	//Reverse direction.
	//set train speed 5.
	setTrainSpeed('0');
	DirectionCmd();
	setTrainSpeed('5');
}

void DirectionCmd()
{
	char cmd[] = "L20D\015";
	wprintf(&train_wnd, "Changing train direction\n");
	SendCmdToTrain(cmd);
}

//set speed, changes the speed of the train.
void setTrainSpeed(char speedCmd)
{
	//- is a place holder for the speedCmd
	char cmd[] = "L20S-\015";
	cmd[4] = speedCmd;
	wprintf(&train_wnd, "Changing train speed to %s\n", &cmd);
	SendCmdToTrain(cmd);
}

//clear train mem
void ClearMemBuffer()
{
	sleep(WAIT_TIME);
	//wprintf(&train_wnd, "Clearing mem buffer\n");
	send_cmd_to_com(mem_cmd);
}

//probe track for a train on it.
//no error checking done here I'll add it if I have time.
int probeTrackSection(char* trackSection)
{
	char cmd[] = "C--\015";
	
	cmd[1] = trackSection[0];
	cmd[2] = trackSection[1];
	return SendCmdToCom(cmd, "0/0", 3);
}

//****************These functions above take care of formatting and passing commands to the COM****************

location FindWagonAndTrain()
{
	//tracks needed to be probed.
	//wagon - 2, 2, 11, 5
	//train - 12, 12, 2, 16
	char config;
	
	location loc;
	//if a train or wagon is on 11 and 2
	if(probeTrackSection("11") && probeTrackSection("02"))
	{
		loc.wagon = 11;
		loc.train = 2;
		config = '3';
	}
	else if(probeTrackSection("02") && probeTrackSection("12"))
	{
		loc.wagon = 2;
		loc.train = 12;
		config = '1';
	}
	else if(probeTrackSection("05") && probeTrackSection("16"))
	{
		loc.wagon = 5;
		loc.train = 16;
		config = '4';
	}
	else
	{
		loc.wagon = 0;
		loc.train = 0;
		config = '0';
	}
	wprintf(&train_wnd, "Selecting config %s\n", &config);
	return loc;
}

//check for zamboni, should probe 1 track for 1 minute.
//until it returns 1, else if it returns 0. Zamboni is not in play.
int CheckTrackForTrain(char* trackSection)
{
	int isThere;
	for(int i = 0; i < 40; i++)
	{
		isThere = probeTrackSection(trackSection);
		if(isThere == 1)
		{
			isThere = 1;
			break;
		}
	} 
	return isThere;
}

//set train switch to R or G. Does error checking for a valid switch.
void TrainSwitch(char switch_num, char position)
{
	//The -- acts as place holders for the switch_num, and position to make creating the cmd easy.
	char cmd[] = "M--\015";
	//check if it is a valid switch.
	if(switch_num < '1' || switch_num > '9')
	{
		wprintf(&train_wnd, "Switch Number Invalid.\n");
	}
	//check if it is a valid position.
	else if(position !='G' && position != 'R')
	{
		wprintf(&train_wnd, "Position Invalid.\n");
	}
	else
	{
		cmd[1] = switch_num;
		cmd[2] = position;
		SendCmdToTrain(cmd);
		wprintf(&train_wnd, "Changing train switch to %s\n", &cmd);
		
		//execute switch command.
	}
}

//Make sure Zamboni doesn't go off the rails, set the outer loop!
void SetOuterTrack()
{
	//Set M1G track switch to Green.
	TrainSwitch('1', 'G');
	//Set M4G  track switch to Green.
	TrainSwitch('4', 'G');
	//Set M5G  track switch to Green.
	TrainSwitch('5', 'G');
	//Set M8G  track switch to Green.
	TrainSwitch('8', 'G');
	//Set M9G  track switch to Green.
	TrainSwitch('9', 'R');
	//Testing fail cases.
	//TrainSwitch('0', 'G');
	//TrainSwitch('9', 'Z');
}

//Tests all the tracks we could probe to see if any fail.
void testProbingTracks()
{
	//should pass.
	probeTrackSection("01");
	probeTrackSection("02");
	probeTrackSection("03");
	probeTrackSection("04");
	probeTrackSection("05");
	probeTrackSection("06");
	probeTrackSection("07");
	probeTrackSection("08");
	probeTrackSection("09");
	probeTrackSection("10");
	probeTrackSection("11");
	probeTrackSection("12");
	probeTrackSection("13");
	probeTrackSection("14");
	probeTrackSection("15");
	probeTrackSection("16");
}

int checkZamRotation(char* trackSection)
{
	int isThere;
	for(int i = 0; i < 5; i++)
	{
		isThere = probeTrackSection(trackSection);
		if(isThere == 1)
		{
			isThere = 1;
			break;
		}
	} 
	return isThere;
}

void SelectConfig(location loc)
{
	//check which way zamboni is going
	//loc.zamRotation = checkZamRotation("07");
	int zamboniCheck;

	//it's either config1 or config2
	if(loc.wagon == 2 && loc.train == 12)
	{
		zamboniCheck = CheckTrackForTrain("03");
		loc.zamRotation = checkZamRotation("04");
		if(zamboniCheck == 0)
		{
			config1(0);
		}
		else if(loc.zamRotation == 1)
		{
			config1(1);
		}
		else if(loc.zamRotation == 0)
		{
			config2(1);
		}
		else
		{
			wprintf(&train_wnd, "Critical error in SelectConfig.\n");
		}
	}
	else if(loc.wagon == 11 && loc.train == 2)
	{
		//run config 3
		config3();
	}
	else if(loc.wagon == 5 && loc.train == 16)
	{
		//run config 4
		config4();
	}
	else
	{
		wprintf(&train_wnd, "Invalid config selected.\n");
	}
}

void config1(int hasZamboni)
{
	if(hasZamboni == 1)
	{	

		//Starting here we are going to pick up the train.
		wprintf(&train_wnd, "Starting config 1 with Zamboni\n");
		if(CheckTrackForTrain("07") == 1)
		{
			TrainSwitch('7', 'G');
			TrainSwitch('1', 'R');
			DirectionCmd();
			setTrainSpeed('5');
		}

		if(CheckTrackForTrain("09") == 1)
		{
			TrainSwitch('2', 'R');
			TrainSwitch('7', 'R');
			//setTrainSpeed('5');
		}
		
		if(CheckTrackForTrain("07") == 1)
		{
			TrainSwitch('4', 'R');
			TrainSwitch('3', 'G');
		}

		if(CheckTrackForTrain("06") == 1)
		{
			setTrainSpeed('4');
		}
		

		if(CheckTrackForTrain("01") == 1)
		{
			setTrainSpeed('0');
		}

		//let zamboni leave the loop
		if(CheckTrackForTrain("14") == 1)
		{
			TrainSwitch('1', 'G');
		}
		
		if(CheckTrackForTrain("03") == 1)
		{
			setTrainSpeed('5');
			TrainSwitch('8', 'R');
			TrainSwitch('5', 'G');
		}

		if(CheckTrackForTrain("11") == 1)
		{
			setTrainSpeed('4');
		}

		if(CheckTrackForTrain("12") == 1)
		{
			setTrainSpeed('0');
		}
		//setTrainSpeed('5');
		//if(CheckTrackForTrain("14") == 1)
		//{
		//	SwitchTrainDirection();
		//}
		//TrainSwitch('1', 'R');
		//TrainSwitch('2', 'G');

		//if(CheckTrackForTrain("01") == 1)
		//{
		//	TrainSwitch('1', 'G');
		//	setTrainSpeed('0');
		//}
		
		//Train has been picked up, lets return home.

		//if(CheckTrackForTrain("10") == 1)
		//{
		//	setTrainSpeed('5');
		//}

		//TrainSwitch('5', 'R');
		//TrainSwitch('6', 'G');

		//if(CheckTrackForTrain("12") == 1)
		//{
		//	setTrainSpeed('0');
		//	TrainSwitch('5', 'G');
		//}
	}
	else if(hasZamboni == 0)
	{
		wprintf(&train_wnd, "Starting config 1 without Zamboni\n");
		setTrainSpeed('5');
		if(CheckTrackForTrain("14") == 1)
		{
			SwitchTrainDirection();
		}

		TrainSwitch('1', 'R');
		TrainSwitch('2', 'G');

		TrainSwitch('5', 'R');
		TrainSwitch('6', 'G');

		if(CheckTrackForTrain("12") == 1)
		{
			setTrainSpeed('0');
		}
	}
}

//Still working on config 2.
void config2(int hasZamboni)
{
	if(hasZamboni == 1)
	{
		wprintf(&train_wnd, "Starting config 2 with Zamboni\n");

		if(CheckTrackForTrain("06") == 1)
		{
			TrainSwitch('7', 'G');
			TrainSwitch('1', 'R');
			TrainSwitch('8', 'R');
			DirectionCmd();
			setTrainSpeed('5');
		}

		if(CheckTrackForTrain("07") == 1)
		{
			
			TrainSwitch('4', 'R');
			TrainSwitch('3', 'G');
		}


		if(CheckTrackForTrain("01") == 1)
		{
			setTrainSpeed('0');
		}

		
		if(CheckTrackForTrain("14") == 1)
		{
			TrainSwitch('8', 'G');
		}

		if(CheckTrackForTrain("10") == 1)
		{
			setTrainSpeed('5');
			TrainSwitch('8', 'R');
		}

		if(CheckTrackForTrain("11") == 1)
		{
			setTrainSpeed('4');
		}

		if(CheckTrackForTrain("12") == 1)
		{
			setTrainSpeed('0');
			TrainSwitch('8', 'G');
		}
		//Go get the Wagon!
		//setTrainSpeed('5');
		//if(CheckTrackForTrain("14") == 1)
		//{
	//		SwitchTrainDirection();
	//	}
	//	
	//	TrainSwitch('1', 'R');
	//	TrainSwitch('2', 'G');
//
//		if(CheckTrackForTrain("01") == 1)
//		{
//			sleep(300);
//			setTrainSpeed('0');
//		}
//
//		//Bring that Wagon back!
//		if(CheckTrackForTrain("10") == 1)
//		{
//			SwitchTrainDirection();
//			TrainSwitch('8', 'R');
//		}
//
//		if(CheckTrackForTrain("13") == 1)
//		{
//			setTrainSpeed('4');
//		}
//
//		if(CheckTrackForTrain("11") == 1)
//		{
//			TrainSwitch('8', 'G');
//		}
//		
//		if(CheckTrackForTrain("12") == 1)
//		{
//			setTrainSpeed('0');
//		}
	}
}

void config3()
{
	int hasZamboni;
	hasZamboni = CheckTrackForTrain("14");

	if(hasZamboni == 1)
	{
		wprintf(&train_wnd, "Starting config 3 with Zamboni\n");
		//Get the Wagon!
		DirectionCmd();
		setTrainSpeed('5');
		TrainSwitch('8', 'R');

		if(CheckTrackForTrain("13") == 1)
		{
			setTrainSpeed('4');
		}

		if(CheckTrackForTrain("11") == 1)
		{
			TrainSwitch('8', 'G');
		}
		
		if(CheckTrackForTrain("12") == 1)
		{
			setTrainSpeed('0');
		}

		//Bring back the Wagon!
		if(CheckTrackForTrain("03") == 1)
		{
			setTrainSpeed('5');
		}
		
		if(CheckTrackForTrain("14") == 1)
		{
			SwitchTrainDirection();
		}
		TrainSwitch('1', 'R');
		TrainSwitch('2', 'G');

		if(CheckTrackForTrain("01") == 1)
		{
			TrainSwitch('1', 'G');
			setTrainSpeed('4');
		}

		if(CheckTrackForTrain("02") == 1)
		{
			setTrainSpeed('0');
		}
	}
	else if(hasZamboni == 0)
	{
		wprintf(&train_wnd, "Starting config 3 without Zamboni\n");
		//Get the Wagon!
		DirectionCmd();
		setTrainSpeed('5');
		TrainSwitch('8', 'R');

		if(CheckTrackForTrain("12") == 1)
		{
			TrainSwitch('8', 'G');
		}

		//Bring back the wagon!
		TrainSwitch('4', 'R');
		TrainSwitch('3', 'G');
		
		if(CheckTrackForTrain("06") == 1)
		{
			setTrainSpeed('4');
		}
			
		if(CheckTrackForTrain("02") == 1)
		{
			setTrainSpeed('0');
		}
	}
}

void config4()
{
	int hasZamboni;
	hasZamboni = CheckTrackForTrain("07");

	if(hasZamboni == 1)
	{
		wprintf(&train_wnd, "Starting config 4 with Zamboni\n");
		
		//Go get the wagon!		
		setTrainSpeed('5');
		
		if(CheckTrackForTrain("10") == 1)
		{
			TrainSwitch('8', 'R');
		}

		if(CheckTrackForTrain("07") == 1)
		{
			TrainSwitch('4', 'R');
			TrainSwitch('3', 'R');
		}

		if(CheckTrackForTrain("06") == 1)
		{
			sleep(650);
			SwitchTrainDirection();
		}

		//Bring the wagon home!
		if(CheckTrackForTrain("06") == 1)
		{
			TrainSwitch('4', 'G');
			SwitchTrainDirection();
		}

		if(CheckTrackForTrain("03") == 1)
		{
			setTrainSpeed('0');
			TrainSwitch('8', 'G');
		}

		if(CheckTrackForTrain("10") == 1)
		{
			setTrainSpeed('5');
		}

		if(CheckTrackForTrain("14") == 1)
		{
			SwitchTrainDirection();
			TrainSwitch('9', 'G');
		}
		
		if(CheckTrackForTrain("16") == 1)
		{
			setTrainSpeed('0');
		}

	}
	else if(hasZamboni == 0)
	{
		wprintf(&train_wnd, "Starting config 4 without Zamboni\n");
		//Go get the wagon!		
		setTrainSpeed('5');
		
		if(CheckTrackForTrain("07") == 1)
		{
			TrainSwitch('4', 'R');
			TrainSwitch('3', 'R');
		}

		if(CheckTrackForTrain("06") == 1)
		{
			sleep(750);
			SwitchTrainDirection();
		}
		
		TrainSwitch('9', 'G');

		
		if(CheckTrackForTrain("16") == 1)
		{
			setTrainSpeed('0');
		}
	}
}

void GoBabyGo()
{
	//set all outer tracks to green so zamboni doesn't crash.
	SetOuterTrack();
	
	//SendCmdToTrain("L78S0\015");
	//SendCmdToTrain("L01S5\015");	

	//find the wagon and train, and select the config to run.
	SelectConfig(FindWagonAndTrain());
	
}

void TrainProcess(PROCESS self, PARAM param)
{	
	GoBabyGo();
	while(1);
}

void init_train(WINDOW* wnd)
{
	wprintf(&train_wnd, "Booting up the train processes\n");
	train_port = create_process(TrainProcess, 5, 0, "Train Process");
}
