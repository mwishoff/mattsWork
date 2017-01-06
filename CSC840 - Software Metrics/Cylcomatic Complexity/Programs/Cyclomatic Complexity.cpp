// By: Matthew Wishoff
// Date: 3/21/16
// Class: CSC 840
// Description:

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <chrono>
#include <regex>

bool oneLiners(char s[]);

using namespace std;

//Coutning LLOC? 
//NSC = Number of semi colons
//NEQ = Number of Equals signs
//LLOC += (NSC + NEQ); // NSC = 1 

//1. We count logical lines of code and denote their number as LLOC.
//2. Each logical statement counts as one, regardless its complexity or level of nesting.
//3. All comments are ignored: in C++, both single line [//] and multiple line [/*...*/].
//4. The logical statement counting formula (based on token analysis) is the following:

	// LLOC = NPU // main program plus all functions
	// + NSC // in the whole program, except comments
	// + NEQ // data definitions only (constructor-initializer)
	// + Nif // all if statements
	// + Nswitch // all switch statements
	//+ Nwhile // all while statements
	// + Nfor // all for statements 
	bool operatorCheck(string line);
	
	regex And("&&");
	regex Or("||");
	regex colon(":");

int main(int argc, char**argv)
{
	string fileName;
	
	int PLOC = 0;
	int LLOC = 0;
	int ifCnt = 0;
	int whileCnt = 0;
	int switchCnt = 0;
	int forCnt = 0;
	int semiColonCnt = 0;
	int equalSignCnt = 0;
	int comment = 0;
	int function =0;
	int v = 0;
	string currentLine;
	
	
	
	// Read in C++ file
	cout << "Enter the file name: ";
	cin >> fileName;
	ifstream C_File;
	C_File.open(fileName);
	
	regex Function("int(.*)");
//	regex Function("^\\s*[\\w_][\\w\\d_]*\\s*.*\\s*[\\w_][\\w\\d_]*\\s*\(.*\\)$");
//	regex oneLiner("([^;]*(;))([^;]*(;))([^;]*(;))");
//	regex oneLiner("^([^;]?;){3}.*$");
	regex oneLiner(".*for(.*;.*;.+;+)");
//	regex oneLiner("for\([^;]*?;[^;]*?;[^)]*?) ;{3}");
//	regex oneLiner("for*\([^;]*?;[^;]*?;[^)]*?)\\ [^;];"); // Regex for a forloop
	regex If("if");  //Need to make the definition more robust!
	regex For("for"); //Need to make the definition more robust!
	regex While("while"); //Need to make the definition more robust!
	regex Switch("switch"); //Need to make the definition more robust!	
	
	//Currently ignores +=, -=, *=, /= expressions.
	regex Equals("[^+*-/]="); //Need to make the definition more robust!
	//(";|;*|;+") <--- Accepts everything that is passed in???
	regex SemiColon(";"); //Need to make the definition more robust!
	
	//Do this last, has least impact on the program.
	regex Comments("//"); //Need to make the definition more robust!
	regex MultiCommentStart("(/*)*");
//	regex MultiCommentEnd("(*/)*"); //Breaks regex whyyyy?
	
	// Go line by line counting lines of code.
	while(!C_File.eof())
	{
//		cout << "**********************Next line***************************" << endl;
		
		//take a line from the program
		getline(C_File, currentLine);
		++PLOC;
		cout << currentLine << endl;
		
//		cout << "**********************current line************************" << endl;
		
//		*************************************************************************************************************
//		if we see a /* we see that a multi line comment has started.
		if(regex_match(currentLine, MultiCommentStart))
		{
//			//we continue to go through the file until we see a */ signifying the comment has ended.
//			//or the end of file is reached
			while(regex_match(currentLine, MultiCommentEnd) && !C_File.eof())
			{
				getline(C_File, currentLine);
			}
		}
//	Probably need to make sure that if a multi line comment is at the end of a file this logic does not break it.

//		*************************************************************************************************************
		
		//wont work if comments are on the same line?
		if(regex_match(currentLine, Comments))
		{
			//Do nothing
		}
		else //incriment appropriate counters.
		{
			if(regex_search(currentLine, If))
			{
				LLOC++;
				ifCnt++;
				v++;
				if(operatorCheck(currentLine))
				{
					v++;
				}
//				cout << "If" << endl;
			}
			else if(regex_search(currentLine, For))
			{
				LLOC++;
				forCnt++;
				v++;
				if(operatorCheck(currentLine))
				{
					v++;
				}
//				cout << "For" << endl;
			}
			else if(regex_search(currentLine, While))
			{
				LLOC++;
				whileCnt++;
				v++;
				if(operatorCheck(currentLine))
				{
					v++;
				}
//				cout << "While" << endl;
			}
			else if(regex_search(currentLine, Switch))
			{
				LLOC++;
				switchCnt++;
//				if(operatorCheck(currentLine))
//				{
//					v++;
//				}
//				cout << "Switch" << endl;
			}
		}
		
	}
	
	C_File.close();
	
//	freopen ("BMProgram25.txt","w",stdout);
	
	cout << "=================================" << endl;
	cout << fileName << endl;
	cout << "PLOC Count: " << PLOC << endl;
	cout << "LLOC Count: " << LLOC << endl;
	cout << "Cyclomatic Complexity: " << v << endl;
	cout << "If statement Count: " << ifCnt << endl;
	cout << "for loop Count: " << forCnt << endl;
	cout << "while loop Count: " << whileCnt << endl;
	cout << "switch statement Count: " << switchCnt << endl;
	cout << "function statement Count: " << function << endl;
	cout << "Semi Colon Count: " << semiColonCnt << endl;
	cout << "Equal sign Count " << equalSignCnt << " - - (Data def only)" << endl;
	cout << "=================================" << endl;
	
//	fclose (stdout);

	return 0;
}

bool operatorCheck(string line)
{	
	if(regex_search(line, And))
	{
		return true;
	}
	else if(regex_search(line, Or))
	{
		return true;
	}
	else if(regex_search(line, colon))
	{
		return true;
	}
	
	return false;
}




