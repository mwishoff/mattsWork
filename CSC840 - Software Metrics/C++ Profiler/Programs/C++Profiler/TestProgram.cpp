//By: Matthew Wishoff
//Date: 5/22/16
//Purpose: to test my profiler program.
#include <iostream>
#include <stdio.h>
#include <chrono>

using namespace std;

int main(int argc, char**argv)
{/* Ran 1 times *//* Ran 1 times *//* Ran 1 times */
	if(true)
	{/* Ran 1 times *//* Ran 1 times *//* Ran 1 times */
		cout << "AGH test program" << endl;
	}
	else
	{/* Ran 0 times *//* Ran 0 times *//* Ran 0 times */
		cout << "not true";
	}
	for(int i = 1; i <= 100; i++)
	{/* Ran 100 times *//* Ran 100 times *//* Ran 100 times */
		if(i % 2 == 0)
		{/* Ran 50 times *//* Ran 50 times *//* Ran 50 times */
			cout << i << endl;
		}
		else if(i %2 != 0)
		{/* Ran 50 times *//* Ran 50 times *//* Ran 50 times */
			cout << i << endl;
		}
		else
		{/* Ran 0 times *//* Ran 0 times *//* Ran 0 times */
			cout << "Probably broken" << endl;
		}
	}
	cout << "This is a parser thing mother fucker" << endl;

	return 0;
}

