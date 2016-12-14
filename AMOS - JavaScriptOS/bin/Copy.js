/*
* Description:
* The cp utility copies the contents of source_file to target_file.
*
*  Options:
* -f Overwrite existing files of the same name without prompting the user.
*
* -i Prompt the user before overwriting existing files.
*
* -n Do not overwrite any existing files.
*
* -R If the source file is a directory, copy all of its contents,
*     maintaining the structure.
*
* -v Verbose mode. Display all file names as they are copied.
*
*/

var cp = function (counter) {

    switch (counter) {
        //case 0:
        //var args = this.args;
        //this.var.szForceOverwrite = false;
        //this.var.szInteractiveMode = false;
        //this.var.szForbidOverwrite = false;
        //this.var.szRecursiveCopy = false;
        //this.var.szVerboseMode = false;
        //this.var.szSourceFile = new String();
        //this.var.szTargetFile = new String();
        //this.var.szTargetExists = false;
        //this.var.szWriteThisFile = false;

        //var szArgZero = args[0];

        //this.var.szSource;
        //this.var.szSourceContent;

        //  //Check Options
        //  if (szArgZero.charAt(0) == '-'){
        //    //Exit on mutually-exclusive options
        //    if(szArgZero.includes('f') && szArgZero.includes('i')){
        //      OS.display("Cannot force overwrite with interactive mode.<br/>");
        //      return 1;
        //    }
        //    else if (szArgZero.includes('f') && szArgZero.includes('n')){
        //      OS.display("Cannot simultaneously force and forbid overwrites.<br/>");
        //      return 1;
        //    }
        //    else if (szArgZero.includes('n') && szArgZero.includes('i')){
        //      OS.display("Cannot forbid overwrites with interactive mode.<br/>");
        //      return 1;
        //    }

        //    //Set compatible options
        //    if(szArgZero.includes('f')){
        //      this.var.szForceOverwrite = true;
        //    }
        //    if(szArgZero.includes('i')){
        //      this.var.szInteractiveMode = true;
        //    }
        //    if(szArgZero.includes('n')){
        //      this.var.szForbidOverwrite = true;
        //    }
        //    if(szArgZero.includes('R')){
        //      this.var.szRecursiveCopy = true;
        //    }
        //    if(szArgZero.includes('v')){
        //      this.var.szVerboseMode = true;
        //    }

        //    //set file names
        //    if(args[1] == null || args[2] == null){
        //      OS.display("Error: Missing a filename argument.<br/>");
        //      return 2;
        //    }
        //    this.var.szSourceFile = args[1];
        //    this.var.szTargetFile = args[2];
        //  }
        //  else{  //no options specified
        //    if(args[0] == null || args[1] == null){
        //      OS.display("Error: Missing a filename argument.<br/>");
        //      return 2;
        //    }
        //    this.var.szSourceFile = args[0];
        //    this.var.szTargetFile = args[1];
        //  }


        //Open and read the source file
        case 0:
            var args = this.args;
            this.var.returnedFile = null;
            // alert(args[0]);
            if (this.args[0] == null || this.args[0] == "") {
                OS.display("No file specified");
                this.state = "Stop";
                this.program_counter = 0;
                break;
            }
            if (args[1] == null) {
                OS.display("No destination specified");
                this.state = "Stop";
                this.program_counter = 0;
                break;
            }
            OS.FS.open(args[0]);
            break;


        case 1:
            this.var.filePointer = this.var.returnedFile;
            try {
                this.var.filePointer.accessName();
            } catch (e) {
                OS.display("File not found");
                this.state = "Stop";
                this.program_counter = 0;
                break;
            }
            if (this.var.filePointer.fileType == "Directory") {
                OS.display("Cannot copy the contents of a directory");
                this.state = "Stop";
                this.program_counter = 0;
                break;
            }
            this.var.filePointer.position = 0;
            OS.FS.length(this.var.filePointer);
            break;
        case 2:
            this.var.content = "";

            OS.FS.position(this.var.filePointer);
            break;
        case 3:

            OS.FS.read(this.var.filePointer);
            break;

        case 4:
            this.var.content += this.var.returnedFromRead;
            OS.FS.position(this.var.filePointer);
            break;

        case 5:
            if (this.var.position < this.var.length) {
                this.program_counter = 3;
                break;
            } else {
                this.program_counter++;
            }
            break;
        case 6:
            OS.FS.close(this.var.filePointer.accessName());
            break;

        case 7:
            //Prompt user to replace if in interactive mode
            //if(this.var.szInteractiveMode == true && this.var.szTargetExists == true){
            //  OS.display("Replace existing file " + this.var.szTargetFile + "? y/n: ");
            //  //Get input from keyboard.
            //  //set new variable equal to input decision
            //  //if yes, force overwrite of target file.
            //  OS.display("<br/>");
            //}

            ////Display filenames if in verbose mode.
            //if(this.var.szVerboseMode == true){
            //  OS.display("Copying " + this.var.szSourceFile + " to " + this.var.szTargetFile + "<br/>");
            //}

            ////Write target file.
            //if(this.var.szForceOverwrite == true){
            //  this.var.szWriteThisFile == true;
            //}
            //else{
            //  this.var.szWriteThisFile == false;
            //}
            //if(this.var.szForbidOverwrite == true){
            //  this.var.szWriteThisFile = false;
            //}
            //if(this.var.szTargetExists == false){
            //  this.var.szWriteThisFile = true;
            //}
            //if(this.var.szWriteThisFile == true){
            if (this.args[0] != this.args[1])
                OS.FS.create(this.args[1], this.var.content);
            else
                OS.display("Source and destination cannot be the same");
            //}

            //Implement recursive copy if/when directories are implemented
            this.program_counter++;

            break;
        default:
            this.state = "Stop";
            this.program_counter = 0;
            console.log(Directory.Files);
    }
    return 0;
}

Processes.listOfProcesses.push(new Process("cp", cp));
HelpInfo.listOfHelp.push(new Manual("cp", "cp [file_name] [file_destination]", "Makes a copy a file with a different file name."));
