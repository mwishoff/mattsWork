//By: Matthew Wishoff
//Date: 5/22/16
//Purpose: to test my profiler program.
#include <iostream>
#include <stdio.h>
#include <chrono>

using namespace std;

int GLOBAL_BODY_COUNTER[7];

int main(int argc, char**argv)
{/* Ran 1 times *//* Ran 1 times */GLOBAL_BODY_COUNTER[0]++;
	if(true)
	{/* Ran 1 times *//* Ran 1 times */GLOBAL_BODY_COUNTER[1]++;
		cout << "AGH test program" << endl;
	}
	else
	{/* Ran 0 times *//* Ran 0 times */GLOBAL_BODY_COUNTER[2]++;
		cout << "not true";
	}
	for(int i = 1; i <= 100; i++)
	{/* Ran 100 times *//* Ran 100 times */GLOBAL_BODY_COUNTER[3]++;
		if(i % 2 == 0)
		{/* Ran 50 times *//* Ran 50 times */GLOBAL_BODY_COUNTER[4]++;
			cout << i << endl;
		}
		else if(i %2 != 0)
		{/* Ran 50 times *//* Ran 50 times */GLOBAL_BODY_COUNTER[5]++;
			cout << i << endl;
		}
		else
		{/* Ran 0 times *//* Ran 0 times */GLOBAL_BODY_COUNTER[6]++;
			cout << "Probably broken" << endl;
		}
	}
	cout << "This is a parser thing mother fucker" << endl;


	freopen ("DataForTestProgram.txt","w",stdout);

	cout << "Times Ran " << endl;
	for(int i = 0; i < 7; i++)
		cout << GLOBAL_BODY_COUNTER[i] << endl;

	return 0;
}

