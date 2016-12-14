//Name: Matthew Wishoff
//Date: 3/29/16
//Class: CSC 840
//Description: Write a program that evaluates the COCOMO model of cost analysis.

//The outputs should be the team size, the program development time, the
//total development cost, etc. Your program should include cost drivers. 

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <math.h>

using namespace std;
//cout << driverNames[driverNumber] + "\t";						
//Put length for in for 15 instead?
#define DisplayDriver(driverNumber)							 								\
		printf("%-36s", driverNames[driverNumber].c_str());									\
		for(j = 1; j <= 6; j++)																\
		{																					\
			if(m##driverNumber[j] != 0.00){													\
				switch(j){																	\
					case 1:																	\
						cout << " [1] Very Low ";											\
						break;																\
					case 2:																	\
						cout << " [2] Low ";												\
						break;																\
					case 3:																	\
						cout << " [3] Normal ";												\
						break;																\
					case 4:																	\
						cout << " [4] High ";												\
						break;																\
					case 5:																	\
						cout << " [5] Very High ";											\
						break;																\
					case 6:																	\
						cout << " [6] Extra High ";											\
						break;																\
				}																			\
			}																				\
			else{																			\
				switch(j){																	\
					case 1:																	\
						cout << "              ";											\
						break;																\
					case 2:																	\
						cout << "         ";												\
						break;																\
					case 3:																	\
						cout << "            ";												\
						break;																\
					case 4:																	\
						cout << "          ";												\
						break;																\
					case 5:																	\
						cout << "          ";												\
						break;																\
					case 6:																	\
						cout << "                ";											\
						break;																\
				}																			\
			}																				\
		}																					\
		cout << endl;																		\
		cout <<	"Enter the corresponding number: ";											\
		flag = true;																		\
		while(flag)																			\
		{																					\
			cin >> driverSetting;															\
			if(m##driverNumber[driverSetting] >= 0.70 &&									\
			   m##driverNumber[driverSetting] <= 1.66 &&									\
			   driverSetting <= 6 &&														\
			   driverSetting >= 1   ){														\
				selectedDrivers[driverNumber - 1] = m##driverNumber[driverSetting];			\
				flag = false;																\
			}																				\
			else{																			\
				cout << "Invalid selection" << endl;										\
				cout << "Enter the corresponding number: ";									\
			}																				\
		}																					\
		cout << endl;											
	
#define Display(method)																									\
		int j;																											\
		DisplayDriver(1); DisplayDriver(2); DisplayDriver(3); DisplayDriver(4); DisplayDriver(5); DisplayDriver(6);		\
		DisplayDriver(7); DisplayDriver(8); DisplayDriver(9); DisplayDriver(10); DisplayDriver(11); DisplayDriver(12);	\
		DisplayDriver(13); DisplayDriver(14); DisplayDriver(15); if(method == 16){ DisplayDriver(method); }	
		
#define thousand 1000							

int main()
{
	double kloc;			  		  // The number of logical lines of code in the program.
	int memSize;		  		  // The memory size of the program.
	int personCost;		  		  // Average cost of employees working on the project.
	char hasKLOC;		  		  // Yes or no value if the user has the KLOC of the program.
	char hasMemSize;	  		  // Yes or no value if the user has the memory size of program.
	string model;		  		  // Which model the program is going to be using to determine the output.
	string driverModel;	  		  // takes in which driver model you would like to use.
	bool flag = true;	  		  // flag to keep while loop executing until parameters are met.
	double aCoefficient;	  		  // Value assigned depending on which cocomo model you choose
	double bCoefficient;	  		  // Value assigned depending on which cocomo model you choose
	double mCoefficient = 1.00;	  // Value assigned depending on which drivers are used...
	double rCoefficient;
	double sCoefficient;
	int driverSetting;	  		  // Value used to change the value of the driver.
	double effort;				  //
	double productivity;
	double time;
	int staffNum;
	double cost;
	double loc;					  // loc == 1000 * kloc
	
	/*
		Drivers
		very low = 1
		low = 2
		nominal = 3
		high = 4
		very high = 5
		extra high = 6
		positions in the drivers that have value 0.00 are not applicable.	
	*/
	
	//Product attributes 
	double m1[7] = {0.00, 0.75, 0.88, 1.00, 1.15, 1.40, 0.00}; // Required software reliability
	double m2[7] = {0.00, 0.00, 0.94, 1.00, 1.08, 1.16, 0.00}; // Data base size
	double m3[7] = {0.00, 0.70, 0.85, 1.00, 1.15, 1.30, 1.65}; // Product complexity
	
	// Computer Attributes
	double m4[7] = {0.00, 0.00, 0.00, 1.00, 1.11, 1.30, 1.66}; // Execution time constraint
	double m5[7] = {0.00, 0.00, 0.00, 1.00, 1.06, 1.21, 1.56}; // Main storage constraint
	double m6[7] = {0.00, 0.00, 0.87, 1.00, 1.15, 1.30, 0.00}; // Virtual machine volatility
	double m7[7] = {0.00, 0.00, 0.87, 1.00, 1.07, 1.15, 0.00}; // Computer turnaround time
	
	//Peronnel Attributes
	double m8[7] = {0.00, 1.46, 1.19, 1.00, 0.86, 0.71, 0.00}; // Analyst capabilities
	double m9[7] = {0.00, 1.29, 1.13, 1.00, 0.91, 0.82, 0.00}; // Applications experience
	double m10[7] = {0.00, 1.42, 1.17, 1.00, 0.86, 0.70, 0.00}; // Programmer capability 
	double m11[7] = {0.00, 1.21, 1.10, 1.00, 0.90, 0.00, 0.00}; // Virtual machine experience
	double m12[7] = {0.00, 1.14, 1.07, 1.00, 0.85, 0.00, 0.00}; // Programming language experience
	
	//Project Attributes
	double m13[7] = {0.00, 1.24, 1.10, 1.00, 0.91, 0.82, 0.00}; // Use of modern programming practices
	double m14[7] = {0.00, 1.24, 1.10, 1.00, 0.91, 0.83, 0.00}; // Use of software tools
	double m15[7] = {0.00, 1.23, 1.08, 1.00, 1.04, 1.10, 0.00}; // Required develoopment schedule
	double m16[7] = {0.00, 0.00, 0.91, 1.00, 1.09, 1.35, 1.62}; // Requirements volatility
	
//	double drivers[16] = { m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16 };
	string driverNames[17] = {" ", "software reliability", "Data base size", "Product complexity", "Execution time constraint",
							  "Main storage constraint", "Virtual machine volatility", "Computer turnaround time", "Analyst capabilities",
							  "Applications experience", "Programmer capability", "Virtual machine experience", "Programming language experience",
							  "Use of modern programming practices", "Use of software tools", "Required development schedule", "Requirements volatility"};
	double selectedDrivers[16] = {};
	for(int i = 0; i <= 15; i++)
	{
		selectedDrivers[i] = 1.00;
	}
	
	//Continue looping until the parameters of the program have been met (kloc or memSize).
	while(flag)
	{
		cout << "Do you have KLOC? (y/n):  ";
		cin >> hasKLOC;
		cout << "Do you have the memory size? (y/n):  ";
		cin >> hasMemSize;
		cout << "Enter the cost per person per month ($/month):  $";
		cin >> personCost;
		
		cout << endl;
		
		if(hasKLOC == 'y')
		{
			cout << "Enter the size of the source program (KLOC):  ";
			cin >> kloc;
			flag = false;
		}
		
		if(hasMemSize == 'y')
		{
			cout << "Enter the size of occupied memory (KiloBytes):  ";
			cin >> memSize;
			cout << "memSize before: " << memSize << endl;
//			loc = memSize/30.8; (This formula is wrong the one below is explained below.
			// y = memsize, and x = loc
			//y = 40.371x - 656.33
			//memsize = 40.371(loc) - 656.33
			//memsize + 656.33 = 40.371(loc)
			//(memsize + 656.33)/40.371 = loc
			//Still incorrect formula? I'm getting weird numbers...
			memSize *= 1000; 
			kloc = ((memSize - 656.33) / (28.1234 * 1000));
			loc = kloc*1000;
			cout << "memsize: " << memSize << endl;
			cout << "kloc: " << kloc << endl;
			cout << "loc: " << loc << endl;
//			loc = ((memSize + 656.33)/40.371);
			
//			kloc = loc * thousand;
			
			//Convert memsize to lines of code,
			//Convert lines of code to KLOC.
			
			flag = false;
		}
		
		if(hasMemSize == 'n' && hasKLOC == 'n')
		{
			cout << "You do not have enough valid information to compute cost analysis." << endl;
			cout << "Please enter at least the KLOC or Memory size of the program to continue . . . " << endl;
			cout << "****************************************************************************** " << endl << endl;
		}
	}
	cout << endl;
	
	cout << "****************************************************************************** " << endl;

		cout <<  "\t \t  Pick the driver that best fits your project" << endl;
		cout << "basic: " << endl;
		cout << "\t The m multiplier will be set to the value 1.00" << endl << endl;
		cout << "medium: " << endl;
		cout << "\t The m multiplier will be made up of 15 different elements" << endl;
		cout << "\t the default of these elements is set to 1.00, and can be" << endl;
		cout << "\t modified individually." << endl << endl;
		cout << "advanced: " << endl;
		cout << "\t The m multiplier will be made up of 16 different elements" << endl;
		cout << "\t the default of these elements is set to 1.00, and can be" << endl;
		cout << "\t modified individually." << endl << endl;
		
	flag = true;		
	while(flag)
	{
		cout << "Enter the driver mode you would like (basic, medium, advanced): ";
		cin >> driverModel;
		cout << endl;
		
		if(driverModel == "basic")
		{
			cout << "Entering " + driverModel + " driver mode . . ." << endl;
			flag = false;
		}
		else if(driverModel == "medium")
		{
			cout << "Entering " + driverModel + " driver mode . . ." << endl << endl;
			Display(15); //Display M-drivers to modify
			flag = false;
		}
		else if(driverModel == "advanced")
		{
			cout << "Entering " + driverModel + " driver mode . . ." << endl << endl;
			Display(16); //Display M-drivers to modify
			flag = false;
		}
		else
		{
			cout << "invalid driver model entered." << endl;
		}
	}
	for(int i = 0; i <= 15; i++)
	{
		mCoefficient = mCoefficient * selectedDrivers[i];
	}
	cout << "mCoefficient: " << mCoefficient << endl;
	
	cout << endl;
	cout << "****************************************************************************** " << endl;
	
	cout << "\t \t  Pick the mode that best describes your project" << endl;
	cout << "Organic: " << endl;
	cout << "\t relatively small size, little innovation, relaxed delivery" << endl;
 	cout << "\t requirements, development in a stable in-house environment" << endl << endl;
 	
 	cout << "Embedded: " << endl;
 	cout << "\t relatively large, operating within tight constraints, greater" << endl;
 	cout << "\t innovation needs, high hardware and customer interface complexity," << endl;
	cout << "\t rigid requirements." << endl << endl;
	
	cout << "Semidetached: " << endl;
	cout << "\t located in between the organic and embedded modes." << endl << endl;
	
	flag = true;
	while(flag)
	{
		cout << "Enter Organic, Embedded, or Semidetached: ";
		cin >> model;
		cout << endl;
	
		if(model == "Organic" || model == "organic")
		{
			flag = false;
			cout << "Entering " + model + " mode . . ." << endl;
			if(driverModel == "basic"){
				aCoefficient =2.40;	  
				bCoefficient =1.05;
			}
			else if(driverModel == "medium"){
				aCoefficient =3.20;	  
				bCoefficient =1.05;
			}
			else if(driverModel == "advanced"){
				aCoefficient =2.60;	  
				bCoefficient =1.08;
			}
			rCoefficient = 2.5;
			sCoefficient = 0.38;
			
		}
		else if(model == "Embedded" || model == "embedded")
		{
			flag = false;
			cout << "Entering " + model + " mode . . ." << endl;
			if(driverModel == "basic"){
				aCoefficient =3.60;	  
				bCoefficient =1.20;
			}
			else if(driverModel == "medium"){
				aCoefficient =2.80;	  
				bCoefficient =1.20;
			}
			else if(driverModel == "advanced"){
				aCoefficient =2.90;	  
				bCoefficient =1.20;
			}
			rCoefficient = 2.5;
			sCoefficient = 0.35;
			
		}
		else if(model == "Semidetached" || model == "semidetached")
		{
			flag = false;
			cout << "Entering " + model + " mode . . ." << endl;
			if(driverModel == "basic"){
				aCoefficient =3.00;	  
				bCoefficient =1.12;
			}
			else if(driverModel == "medium"){
				aCoefficient =3.00;	  
				bCoefficient =1.12;
			}
			else if(driverModel == "advanced"){
				aCoefficient =2.90;	  
				bCoefficient =1.12;
			}
			rCoefficient = 2.5;
			sCoefficient = 0.32;
			
		}
		else
		{
			cout << endl << endl;
			cout << "Incorrect model entered." << endl;
		}
	}

	cout << "****************************************************************************** " << endl;
	cout << "\t \t Calculated Values" << endl;
	loc = kloc * thousand;
	effort = aCoefficient * pow(kloc, bCoefficient) * mCoefficient;
//	effort = aCoefficient * loc^bCoefficient * mCoefficient;
	productivity = loc / effort;
	time = rCoefficient * pow(effort, sCoefficient);
	staffNum = effort / time;
	cost = personCost * effort;
	
	cout << "aCoefficient = " << aCoefficient << endl;
	cout << "bCoefficient = " << bCoefficient << endl;
	cout << "mCoefficient = " << mCoefficient << endl;
	cout << "rCoefficient = " << rCoefficient << endl;
	cout << "sCoefficient = " << sCoefficient << endl;
	cout << "Loc          = " << loc << endl;
	cout << "kloc         = " << kloc << endl << endl;
	
	cout << "****************************************************************************** " << endl;
	cout << "\t\t End Results" << endl;
	
	
	cout << "Effort       = " << effort << endl;
	cout << "Productivity = " << productivity << endl;
	cout << "Time         = " << time << endl;
	cout << "Staff needed = " << staffNum << endl;
	

	
	cout << "Cost         = " << cost << endl;
	
	
	//PUT EQUATIONS?! PRINT THINGS!?
	
	
}
