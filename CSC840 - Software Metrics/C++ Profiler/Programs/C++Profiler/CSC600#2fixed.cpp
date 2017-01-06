//By Matthew Wishoff
// 2/20/16

#include <iostream>
#include <time.h>
#include <math.h>
#include <string>
#define N 10000

// CSC 600 Assignment Outline
//1. Show that for unsigned int a,b and a>0, b>0, we can get a+b < a
//2. Show that for int a,b and a>0, b>0, we can get a+b < 0
//3. Show that for int a,b and a<0, b<0, we can get a+b > 0
//4. Show that for double x and x>0 we can get 1. + x = = 1.
//5. Show that for double a,b,c in some cases (a+b)+c != (c+b)+a
//6. Show the results of the following power function:
//pow(-2., 3), pow(-2., 3.0) , pow(-2., 3.00000000001)
//7. Show the memory size of the following constants 1. , 1.F, 1 , '1' , and "1"
//8. Display 1./3. using 20 digits and show the correct and incorrect digits
//9. Display all printable characters of the ASCII table in 3 columns:
//first column: 32-63, second column: 64-95, third column: 96-127. Each column
//must include the numeric value and the corresponding character. Following is
//an example of one of 32 rows in the ASCII table:
//33 ! 65 A 97 a
//10. Compute sqrt(2.) using your own program for square root function.

void numberOne();
void numberTwo();
void numberThree();
void numberFour();
void numberFive();
void numberSix();
void numberSeven();
void numberEight();
void numberNine();
void numberTen();

using namespace std;

int GLOBAL_BODY_COUNTER[13];

int main()
{GLOBAL_BODY_COUNTER[0]++;
	numberOne();
	cout << "******************************************************" << endl;
	numberTwo();
	cout << "******************************************************" << endl;
	numberThree();
	cout << "******************************************************" << endl;
	numberFour();
	cout << "******************************************************" << endl;
	numberFive();
	cout << "******************************************************" << endl;
	numberSix();
	cout << "******************************************************" << endl;
	numberSeven();
	cout << "******************************************************" << endl;
	numberEight();
	cout << "******************************************************" << endl;
	numberNine();
	cout << "******************************************************" << endl;
	numberTen();
	

	freopen ("DataForCSC600#2.txt","w",stdout);

	cout << "Times Ran " << endl;
	for(int i = 0; i < 13; i++)
		cout << GLOBAL_BODY_COUNTER[i] << endl;

	return 0;
}

void numberOne()
{GLOBAL_BODY_COUNTER[1]++;
	unsigned int a = 4294967095;
	unsigned int b = 1000;
	unsigned int Sum = 0;
	
	cout << "a = 4294967095" << endl;
	cout << "b = 1000" << endl;
	cout << "Sum before: " << Sum << endl;
	cout << "Sum = 4294967095 + 1000" << endl;
	Sum = a + b;
	cout << "Sum after: " << Sum << endl;
}

void numberTwo()
{GLOBAL_BODY_COUNTER[2]++;
	int a = 2147483647;
	int b = 1000;
	int Sum = 0;
	
	cout << "a = 2147483647" << endl;
	cout << "b = 1000" << endl;
	cout << "Sum before: " << Sum << endl;
	cout << "Sum = " << a << " + " << b << endl;
	Sum = a + b;
	cout << "Sum after: " << Sum << endl;
}

void numberThree()
{GLOBAL_BODY_COUNTER[3]++;
	int a = -2147483647;
	int b = -1000;
	int Sum = 0;
	
	cout << "a = -2147483647" << endl;
	cout << "b = -1000" << endl;
	cout << "Sum before: " << Sum << endl;
	cout << "Sum = " << a << " + " << b << endl;
	Sum = a + b;
	cout << "Sum after: " << Sum << endl;
}

void numberFour()
{GLOBAL_BODY_COUNTER[4]++;
	double x = 0.000001;
	double y = 1.0;
	double Sum = 0.0;
	
	cout << "x = 0.000001" << endl;
	cout << "y = 1.0" << endl;
	cout << "Sum before: " << Sum << endl;
	cout << "Sum = " << x << " + " << y << endl;
	Sum = x + y;
	cout << "Sum after: " << Sum << endl;
}

void numberFive()
{GLOBAL_BODY_COUNTER[5]++;
	double a = 0.003;
	double b = 0.05;
	double c = 0.07;
	
	cout << (a + b) + c << endl;
	cout << a + (b + c) << endl;
}

void numberSix()
{GLOBAL_BODY_COUNTER[6]++;
	cout << pow(-2.0, 3) << endl;
	cout << pow(-2.0, 3.0) << endl;
	cout << pow(-2.0, 3.00000000001) << endl;
}

void numberSeven()
{GLOBAL_BODY_COUNTER[7]++;
	double a = 1.0;
	float b = 1.0;
	int c = 1;
	char d = '1';
	string e = "1";
	
	cout << "Number of bytes in 1.0(double): " << sizeof(a) << endl;
	cout <<"Number of bytes in 1.0(float): " << sizeof(b) << endl;
	cout <<"Number of bytes in 1(int): " << sizeof(c) << endl;
	cout <<"Number of bytes in '1'(char): " << sizeof(d) << endl;
	cout <<"Number of bytes in '1'(string): " << sizeof(e) << endl;
}

void numberEight()
{GLOBAL_BODY_COUNTER[8]++;
	double a = 1.0;
	double b = 3.0;
	
	cout << "Six digits of precesion: " << a/b << endl;
	
	cout.precision(20);
	
	cout << "20 digits of precesion: " << fixed << a/b << endl;
}

void numberNine()
{GLOBAL_BODY_COUNTER[9]++;
	for(int i = 32; i <= 63; i++)
	{GLOBAL_BODY_COUNTER[10]++;
		cout << (char)i << "		" << (char)(i + 32) << "		" << (char)(i + 64) << endl;
	}
}

void numberTen()
{GLOBAL_BODY_COUNTER[11]++;
	double x = 2;

    double y = (1+x)/2;		//approximate the value of y
    double z = 0;
    while (y != z) {GLOBAL_BODY_COUNTER[12]++;
        z = y;				//Compare y old to y new
        y = (y + x/y) / 2.0;	//get closer to actuall square root value
    }
    cout << y << endl; 		//Print y to console.
	
}
