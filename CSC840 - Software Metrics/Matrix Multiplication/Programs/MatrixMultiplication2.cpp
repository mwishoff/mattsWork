/*
* Class: CSC 840
* By: Matthew Wishoff
* Date: 3/4/2016
* Description: Standard way of multiplying matricies
*/

#include <iostream>
#include <stdio.h>
#include <chrono>

#define NUM_OF_TESTS 48
#define NMAX 500
#define NMIN 100
#define STEP 20

//Create 2d Array RUN_TIME and store values then you might be done.

int TEST_NUM = 0;
double RUN_TIME[NUM_OF_TESTS][((NMAX - NMIN) / STEP) + 1];

using namespace std;

int main(int argc, char**argv)
{
	chrono::steady_clock::time_point startTime, stopTime;
	int col = 0;
	int M;

	// Initialize 
	for(int n=NMIN; n <= NMAX; n+=STEP, col++) //increase size of matrix
	{
		M =(NMAX*NMAX*NMAX)/(n*n*n);
		if(M < 4)
		{
			M = 4;
		}
		double** a = new double*[n]; //Initialize to the min, the next iteration will step by 20
		double** b = new double*[n]; //Initialize to the min, the next iteration will step by 20
		double** c = new double*[n]; //Initialize to the min, the next iteration will step by 20  
		
		cout << "before init" << endl;
		for(int i = 0; i < n; i++)
		{
			a[i] = new double[n];
			b[i] = new double[n];
			c[i] = new double[n];
		}
	
		// Matrix a[ ][ ], b[ ][ ], and c[ ][ ] initialization
		for(int i=0; i<n; i++) 
			for(int j=0; j<n; j++)
			{
				//Initialize diagonal to 2.0002, and everywhere else to 1.0001
				if(i == j)
				{
					a[i][j] = 2.0002;
					b[i][j] = 2.0002;
				}
				else
				{
					a[i][j] = 1.0001;
					b[i][j] = 1.0001;
				}
				c[i][j]=0.0; 
			} 
			
			//********************************************************************************************************
			//***********************************************IJK LOOPS START******************************************
			startTime = chrono::steady_clock::now();
			for(int m=0; m<M; m++)  				
				for(int i=0; i<n; i++) 				
					for(int j=0; j<n; j++) 			
						for(int k=0; k<n; k++)
						{
							c[i][j] += a[i][k]*b[k][j];
						}
			stopTime = chrono::steady_clock::now();
			RUN_TIME[0][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
							
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++)  				
				for(int i=0; i<n; i++) 				
					for(int j=0; j<n; j++) 			
						for(int k=0; k<n; k++)
						{
							c[i][j] += a[i][k]*b[j][k];
						}
			stopTime = chrono::steady_clock::now();
			RUN_TIME[1][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++)  				
				for(int i=0; i<n; i++) 				
					for(int j=0; j<n; j++) 			
						for(int k=0; k<n; k++)
						{
							c[i][j] += a[k][i]*b[k][j];
						}
			stopTime = chrono::steady_clock::now();
			RUN_TIME[2][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();							
			for(int m=0; m<M; m++)  				
				for(int i=0; i<n; i++) 				
					for(int j=0; j<n; j++) 			
						for(int k=0; k<n; k++)
						{
							c[i][j] += a[k][i]*b[j][k];
						}
			stopTime = chrono::steady_clock::now();
			RUN_TIME[3][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();			
			for(int m=0; m<M; m++)  				
				for(int i=0; i<n; i++) 				
					for(int j=0; j<n; j++) 			
						for(int k=0; k<n; k++)
						{
							c[j][i] += a[i][k]*b[k][j];
						}
			stopTime = chrono::steady_clock::now();
			RUN_TIME[4][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();			
			for(int m=0; m<M; m++)  				
				for(int i=0; i<n; i++) 				
					for(int j=0; j<n; j++) 			
						for(int k=0; k<n; k++)
						{
							c[j][i] += a[i][k]*b[j][k];
						}
			stopTime = chrono::steady_clock::now();
			RUN_TIME[5][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();			
			for(int m=0; m<M; m++)  				
				for(int i=0; i<n; i++) 				
					for(int j=0; j<n; j++) 			
						for(int k=0; k<n; k++)
						{
							c[j][i] += a[k][i]*b[k][j];
						}
			stopTime = chrono::steady_clock::now();
			RUN_TIME[6][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();			
			for(int m=0; m<M; m++)  				
				for(int i=0; i<n; i++) 				
					for(int j=0; j<n; j++) 			
						for(int k=0; k<n; k++)
						{
							c[j][i] += a[k][i]*b[j][k];	
						}
			stopTime = chrono::steady_clock::now();
			RUN_TIME[7][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			//********************************************************************************************************
			//***********************************************IJK LOOPS END********************************************
			
			//********************************************************************************************************
			//***********************************************IKJ LOOPS START******************************************
			startTime = chrono::steady_clock::now();
			for(int m=0; m<M; m++) 					
				for(int i=0; i<n; i++) 				
					for(int k=0; k<n; k++)			
						for(int j=0; j<n; j++)
						{
							c[i][j] += a[i][k]*b[k][j];
						}
			stopTime = chrono::steady_clock::now();
			RUN_TIME[8][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;		
			
			startTime = chrono::steady_clock::now();
			for(int m=0; m<M; m++) 					
				for(int i=0; i<n; i++) 				
					for(int k=0; k<n; k++)			
						for(int j=0; j<n; j++)
						{
							c[i][j] += a[i][k]*b[j][k];
						}
			stopTime = chrono::steady_clock::now();
			RUN_TIME[9][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
					
			startTime = chrono::steady_clock::now();	
			for(int m=0; m<M; m++) 					
				for(int i=0; i<n; i++) 				
					for(int k=0; k<n; k++)			
						for(int j=0; j<n; j++)
						{
							c[i][j] += a[k][i]*b[k][j];
						}
			stopTime = chrono::steady_clock::now();
			RUN_TIME[10][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();			
			for(int m=0; m<M; m++) 					
				for(int i=0; i<n; i++) 				
					for(int k=0; k<n; k++)			
						for(int j=0; j<n; j++)
						{
							c[i][j] += a[k][i]*b[j][k];
						}
			stopTime = chrono::steady_clock::now();
			RUN_TIME[11][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();			
			for(int m=0; m<M; m++) 					
				for(int i=0; i<n; i++) 				
					for(int k=0; k<n; k++)			
						for(int j=0; j<n; j++)
						{
							c[j][i] += a[i][k]*b[k][j];
						}
			stopTime = chrono::steady_clock::now();
			RUN_TIME[12][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();			
			for(int m=0; m<M; m++) 					
				for(int i=0; i<n; i++) 				
					for(int k=0; k<n; k++)			
						for(int j=0; j<n; j++)
						{
							c[j][i] += a[i][k]*b[j][k];
						}
			stopTime = chrono::steady_clock::now();
			RUN_TIME[13][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();			
			for(int m=0; m<M; m++) 					
				for(int i=0; i<n; i++) 				
					for(int k=0; k<n; k++)			
						for(int j=0; j<n; j++)
						{
							c[j][i] += a[k][i]*b[k][j];
						}
			stopTime = chrono::steady_clock::now();
			RUN_TIME[14][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();			
			for(int m=0; m<M; m++) 					
				for(int i=0; i<n; i++) 				
					for(int k=0; k<n; k++)			
						for(int j=0; j<n; j++)
						{
							c[j][i] += a[k][i]*b[j][k];
						}				
			stopTime = chrono::steady_clock::now();
			RUN_TIME[15][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			//********************************************************************************************************
			//***********************************************IKJ LOOPS END********************************************
			
			//********************************************************************************************************
			//***********************************************KJI LOOPS START******************************************
			startTime = chrono::steady_clock::now();
			for(int m=0; m<M; m++)					
				for(int k=0; k<n; k++) 				
					for(int j=0; j<n; j++)			
						for(int i=0; i<n; i++)		
							c[i][j] += a[i][k]*b[k][j];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[16][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();
			for(int m=0; m<M; m++)					
				for(int k=0; k<n; k++) 				
					for(int j=0; j<n; j++)			
						for(int i=0; i<n; i++)		
							c[i][j] += a[i][k]*b[j][k];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[17][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++)					
				for(int k=0; k<n; k++) 				
					for(int j=0; j<n; j++)			
						for(int i=0; i<n; i++)		
							c[i][j] += a[k][i]*b[k][j];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[18][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++)					
				for(int k=0; k<n; k++) 				
					for(int j=0; j<n; j++)			
						for(int i=0; i<n; i++)		
							c[i][j] += a[k][i]*b[j][k];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[19][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++)					
				for(int k=0; k<n; k++) 				
					for(int j=0; j<n; j++)			
						for(int i=0; i<n; i++)		
							c[j][i] += a[i][k]*b[k][j];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[20][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++)					
				for(int k=0; k<n; k++) 				
					for(int j=0; j<n; j++)			
						for(int i=0; i<n; i++)		
							c[j][i] += a[i][k]*b[j][k];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[21][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++)					
				for(int k=0; k<n; k++) 				
					for(int j=0; j<n; j++)			
						for(int i=0; i<n; i++)		
							c[j][i] += a[k][i]*b[k][j];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[22][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++)					
				for(int k=0; k<n; k++) 				
					for(int j=0; j<n; j++)			
						for(int i=0; i<n; i++)		
							c[j][i] += a[k][i]*b[j][k];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[23][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
																											
			//********************************************************************************************************
			//***********************************************KJI LOOPS END********************************************
			
			//********************************************************************************************************
			//***********************************************KIJ LOOPS START******************************************
			startTime = chrono::steady_clock::now();
			for(int m=0; m<M; m++) 					
				for(int k=0; k<n; k++) 				
					for(int i=0; i<n; i++)			
						for(int j=0; j<n; j++)		
							c[i][j] += a[i][k]*b[k][j];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[24][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();
			for(int m=0; m<M; m++) 					
				for(int k=0; k<n; k++) 				
					for(int i=0; i<n; i++)			
						for(int j=0; j<n; j++)		
							c[i][j] += a[i][k]*b[j][k];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[25][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++) 					
				for(int k=0; k<n; k++) 				
					for(int i=0; i<n; i++)			
						for(int j=0; j<n; j++)		
							c[i][j] += a[k][i]*b[k][j];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[26][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++) 					
				for(int k=0; k<n; k++) 				
					for(int i=0; i<n; i++)			
						for(int j=0; j<n; j++)		
							c[i][j] += a[k][i]*b[j][k];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[27][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
							
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++) 					
				for(int k=0; k<n; k++) 				
					for(int i=0; i<n; i++)			
						for(int j=0; j<n; j++)		
							c[j][i] += a[i][k]*b[k][j];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[28][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++) 					
				for(int k=0; k<n; k++) 				
					for(int i=0; i<n; i++)			
						for(int j=0; j<n; j++)		
							c[j][i] += a[i][k]*b[j][k];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[29][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++) 					
				for(int k=0; k<n; k++) 				
					for(int i=0; i<n; i++)			
						for(int j=0; j<n; j++)		
							c[j][i] += a[k][i]*b[k][j];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[30][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++) 					
				for(int k=0; k<n; k++) 				
					for(int i=0; i<n; i++)			
						for(int j=0; j<n; j++)		
							c[j][i] += a[k][i]*b[j][k];																												
			stopTime = chrono::steady_clock::now();
			RUN_TIME[31][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			//********************************************************************************************************
			//***********************************************KIJ LOOPS START******************************************
			
			//********************************************************************************************************
			//***********************************************JKI LOOPS START******************************************
			startTime = chrono::steady_clock::now();
			for(int m=0; m<M; m++) 					
				for(int j=0; j<n; j++) 				
					for(int k=0; k<n; k++)			
						for(int i=0; i<n; i++)		
							c[i][j] += a[i][k]*b[k][j];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[32][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;	
			
			startTime = chrono::steady_clock::now();
			for(int m=0; m<M; m++) 					
				for(int j=0; j<n; j++) 				
					for(int k=0; k<n; k++)			
						for(int i=0; i<n; i++)		
							c[i][j] += a[i][k]*b[j][k];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[33][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();
			for(int m=0; m<M; m++) 					
				for(int j=0; j<n; j++) 				
					for(int k=0; k<n; k++)			
						for(int i=0; i<n; i++)		
							c[i][j] += a[k][i]*b[k][j];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[34][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();
			for(int m=0; m<M; m++) 					
				for(int j=0; j<n; j++) 				
					for(int k=0; k<n; k++)			
						for(int i=0; i<n; i++)		
							c[i][j] += a[k][i]*b[j][k];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[35][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++) 					
				for(int j=0; j<n; j++) 				
					for(int k=0; k<n; k++)			
						for(int i=0; i<n; i++)		
							c[j][i] += a[i][k]*b[k][j];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[36][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++) 					
				for(int j=0; j<n; j++) 				
					for(int k=0; k<n; k++)			
						for(int i=0; i<n; i++)		
							c[j][i] += a[i][k]*b[j][k];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[37][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++) 					
				for(int j=0; j<n; j++) 				
					for(int k=0; k<n; k++)			
						for(int i=0; i<n; i++)		
							c[j][i] += a[k][i]*b[k][j];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[38][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++) 					
				for(int j=0; j<n; j++) 				
					for(int k=0; k<n; k++)			
						for(int i=0; i<n; i++)		
							c[j][i] += a[k][i]*b[j][k];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[39][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;																				
			//********************************************************************************************************
			//***********************************************JKI LOOPS END********************************************
			
			//********************************************************************************************************
			//***********************************************JIK LOOPS START******************************************
			startTime = chrono::steady_clock::now();
			for(int m=0; m<M; m++) 					
				for(int j=0; j<n; j++) 				
					for(int i=0; i<n; i++)			
						for(int k=0; k<n; k++)		
							c[i][j] += a[i][k]*b[k][j];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[40][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++) 					
				for(int j=0; j<n; j++) 				
					for(int i=0; i<n; i++)			
						for(int k=0; k<n; k++)		
							c[i][j] += a[i][k]*b[j][k];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[41][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++) 					
				for(int j=0; j<n; j++) 				
					for(int i=0; i<n; i++)			
						for(int k=0; k<n; k++)		
							c[i][j] += a[k][i]*b[k][j];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[42][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++) 					
				for(int j=0; j<n; j++) 				
					for(int i=0; i<n; i++)			
						for(int k=0; k<n; k++)		
							c[i][j] += a[k][i]*b[j][k];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[43][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++) 					
				for(int j=0; j<n; j++) 				
					for(int i=0; i<n; i++)			
						for(int k=0; k<n; k++)		
							c[j][i] += a[i][k]*b[k][j];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[44][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++) 					
				for(int j=0; j<n; j++) 				
					for(int i=0; i<n; i++)			
						for(int k=0; k<n; k++)		
							c[j][i] += a[i][k]*b[j][k];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[45][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++) 					
				for(int j=0; j<n; j++) 				
					for(int i=0; i<n; i++)			
						for(int k=0; k<n; k++)		
							c[j][i] += a[k][i]*b[k][j];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[46][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			
			startTime = chrono::steady_clock::now();				
			for(int m=0; m<M; m++) 					
				for(int j=0; j<n; j++) 				
					for(int i=0; i<n; i++)			
						for(int k=0; k<n; k++)		
							c[j][i] += a[k][i]*b[j][k];
			stopTime = chrono::steady_clock::now();
			RUN_TIME[47][col] = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / M;
			//********************************************************************************************************
			//***********************************************JIK LOOPS END********************************************									
														
			for(int i = 0; i < n; i++)
			{
				delete[] a[i];
				delete[] b[i];
				delete[] c[i];
			}
			delete[] a;
			delete[] b;
			delete[] c;
	}
		//Pipe the RUN_TIME 2D array out into a text file.
	freopen ("MatrixMultiplicationStandardBatteryPower5Iterations.txt","w",stdout);
	
	for(int i = 0; i < NUM_OF_TESTS; i++) // this is correct
	{
		for(int j = 0; j <= (NMAX - NMIN) / STEP; j++)
		{
			if(j == (NMAX - NMIN) / STEP)
			{
				cout << RUN_TIME[i][j];
			}
			else
			{
				cout << RUN_TIME[i][j] << ", "; //Print a row of data
			}	
		}
		cout << endl;
	}
	cout << endl;
	fclose (stdout);
}
