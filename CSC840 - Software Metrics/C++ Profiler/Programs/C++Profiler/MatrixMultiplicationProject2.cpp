/*
* Class: CSC 840
* By: Matthew Wishoff
* Date: 3/4/2016
* Description: This program multiplies two matricies 48 different ways.
* 			   It also steps the matrix size by 20 on each iteration through the 48 ways.
*/
#include <iostream>
#include <stdio.h>
#include <chrono>

using namespace std;

#define DO_MULTIPLY_1 c[i][j] += a[i][k]*b[k][j]
#define DO_MULTIPLY_2 c[i][j] += a[i][k]*b[j][k]
#define DO_MULTIPLY_3 c[i][j] += a[k][i]*b[k][j]
#define DO_MULTIPLY_4 c[i][j] += a[k][i]*b[j][k]
#define DO_MULTIPLY_5 c[j][i] += a[i][k]*b[k][j]
#define DO_MULTIPLY_6 c[j][i] += a[i][k]*b[j][k]
#define DO_MULTIPLY_7 c[j][i] += a[k][i]*b[k][j]
#define DO_MULTIPLY_8 c[j][i] += a[k][i]*b[j][k]

#define DO_MULTIPLY_IJK(method)	 			\
	for(int m=0; m<M; m++)  				\
		for(int i=0; i<n; i++) 				\
			for(int j=0; j<n; j++) 			\
				for(int k=0; k<n; k++)		\
					DO_MULTIPLY_##method;
				
					
						
#define DO_MULTIPLY_IKJ(method)	 			\
	for(int m=0; m<M; m++) 					\
		for(int i=0; i<n; i++) 				\
			for(int k=0; k<n; k++)			\
				for(int j=0; j<n; j++)		\
					DO_MULTIPLY_##method;
				
						
#define DO_MULTIPLY_KJI(method)	 			\
	for(int m=0; m<M; m++)					\
		for(int k=0; k<n; k++) 				\
			for(int j=0; j<n; j++)			\
				for(int i=0; i<n; i++)		\
					DO_MULTIPLY_##method;
				
						
#define DO_MULTIPLY_KIJ(method)	 			\
	for(int m=0; m<M; m++) 					\
		for(int k=0; k<n; k++) 				\
			for(int i=0; i<n; i++)			\
				for(int j=0; j<n; j++)		\
					DO_MULTIPLY_##method;
				
						
#define DO_MULTIPLY_JKI(method)	 			\
	for(int m=0; m<M; m++) 					\
		for(int j=0; j<n; j++) 				\
			for(int k=0; k<n; k++)			\
				for(int i=0; i<n; i++)		\
					DO_MULTIPLY_##method;
				
						
#define DO_MULTIPLY_JIK(method)	 			\
	for(int m=0; m<M; m++) 					\
		for(int j=0; j<n; j++) 				\
			for(int i=0; i<n; i++)			\
				for(int k=0; k<n; k++)		\
					DO_MULTIPLY_##method;
				
						
#define MULTIPLY(method) 																												\
		startTime = chrono::steady_clock::now(); 																						\
			DO_MULTIPLY_IJK(method);																								    \
		stopTime = chrono::steady_clock::now(); 																						\
		RUN_TIME[TEST_NUM++ % NUM_OF_TESTS][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M; 	\
																																		\
		startTime = chrono::steady_clock::now();																					    \
			DO_MULTIPLY_IKJ(method);																									\
		stopTime = chrono::steady_clock::now();																							\
		RUN_TIME[TEST_NUM++ % NUM_OF_TESTS][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;	\
																																		\
		startTime = chrono::steady_clock::now(); 																						\
			DO_MULTIPLY_KJI(method);																									\
		stopTime = chrono::steady_clock::now(); 																						\
		RUN_TIME[TEST_NUM++ % NUM_OF_TESTS][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;	\
																																		\
		startTime = chrono::steady_clock::now(); 																						\
			DO_MULTIPLY_KIJ(method);																									\
		stopTime = chrono::steady_clock::now(); 																						\
		RUN_TIME[TEST_NUM++ % NUM_OF_TESTS][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;	\
																																		\
		startTime = chrono::steady_clock::now();																					    \
			DO_MULTIPLY_JKI(method);																									\
		stopTime = chrono::steady_clock::now();																							\
		RUN_TIME[TEST_NUM++ % NUM_OF_TESTS][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;	\
																																		\
		startTime = chrono::steady_clock::now(); 																						\
			DO_MULTIPLY_JIK(method);																									\
		stopTime = chrono::steady_clock::now();																							\
		RUN_TIME[TEST_NUM++ % NUM_OF_TESTS][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
						
#define NUM_OF_TESTS (8*6)
#define NMAX 500
#define NMIN 100
#define STEP 20

int TEST_NUM = 0;
double RUN_TIME[NUM_OF_TESTS][((NMAX - NMIN) / STEP) + 1];

int main(int argc, char**argv)
{ /* Times ran 1 */
	chrono::steady_clock::time_point startTime, stopTime;
	int col = 0;
	int M ;

	// Initialize 
	for(int n=NMIN; n <= NMAX; n+=STEP, col++) //increase size of matrix
	{ /* Times ran 21 */
		M =(NMAX*NMAX*NMAX)/(n*n*n);
		if(M < 4)
		{ /* Times ran 10 */
			M = 4;
		}
		double** a = new double*[n]; //Initialize to the min, the next iteration will step by 20
		double** b = new double*[n]; //Initialize to the min, the next iteration will step by 20
		double** c = new double*[n]; //Initialize to the min, the next iteration will step by 20  
		
		cout << "before init" << endl;
		for(int i = 0; i < n; i++)
		{ /* Times ran 6300 */
			a[i] = new double[n];
			b[i] = new double[n];
			c[i] = new double[n];
		}
	
		// Matrix a[ ][ ], b[ ][ ], and c[ ][ ] initialization
		for(int i=0; i<n; i++) 
			for(int j=0; j<n; j++)
			{ /* Times ran 2198000 */
				//Initialize diagonal to 2.0002, and everywhere else to 1.0001
				if(i == j)
				{ /* Times ran 6300 */
					a[i][j] = 2.0002;
					b[i][j] = 2.0002;
				}
				else
				{ /* 2191700 */
					a[i][j] = 1.0001;
					b[i][j] = 1.0001;
				}
				c[i][j]=0.0; 
			} 
		
		MULTIPLY(1); //multiply 6 different matricies and save their run times to the RUN_TIME 2d array
		MULTIPLY(2); //multiply 6 different matricies and save their run times to the RUN_TIME 2d array
		MULTIPLY(3); //multiply 6 different matricies and save their run times to the RUN_TIME 2d array
		MULTIPLY(4); //multiply 6 different matricies and save their run times to the RUN_TIME 2d array
		MULTIPLY(5); //multiply 6 different matricies and save their run times to the RUN_TIME 2d array
		MULTIPLY(6); //multiply 6 different matricies and save their run times to the RUN_TIME 2d array
		MULTIPLY(7); //multiply 6 different matricies and save their run times to the RUN_TIME 2d array
		MULTIPLY(8); //multiply 6 different matricies and save their run times to the RUN_TIME 2d array
		
		//Delete dynamic array of pointers.
		for(int i = 0; i < n; i++)
		{ /* Times ran 6300 */
				delete[] a[i];
				delete[] b[i];
				delete[] c[i];
		}
		delete[] a;
		delete[] b;
		delete[] c;
	}
	
	//Pipe the RUN_TIME 2D array out into a text file.
	freopen ("MatrixMultiplicationWithBatteryPower5Iterations.txt","w",stdout);
	
	for(int i = 0; i < NUM_OF_TESTS; i++) // this is correct
	{ /* Times ran 48 */
		for(int j = 0; j <= (NMAX - NMIN) / STEP; j++)
		{ /* Times ran 1008 */
			if(j == (NMAX - NMIN) / STEP)
			{ /* Times ran 48 */
				cout << RUN_TIME[i][j];
			}
			else
			{ /* Times ran 960 */
				cout << RUN_TIME[i][j] << ", "; //Print a row of data
			}	
		}
		cout << endl;
	}
	cout << endl;
	fclose (stdout);
	
	return 0;
}
