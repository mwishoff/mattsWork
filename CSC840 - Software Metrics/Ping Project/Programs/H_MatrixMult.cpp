#include<iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>    
#include <time.h>
#define N 200
using namespace std;
//performing matrix multiplication
int main()
{
    double time;
    int it = 10;
    
    
    clock_t begin = clock();
    
    for(int z = 0; z < it; z++)
    {
		int matrix1[N][N];
		int matrix2[N][N];
		int product[N][N];
		
		//initializing matrix1 with random values
		for(int i=0;i<N;i++)
		    for(int j=0;j<N;j++)
		        matrix1[i][j]=rand() % 10+ 1;
		    
		//initializing matrix2 with random values
		for(int i=0;i<N;i++)
		    for(int j=0;j<N;j++)
		        matrix2[i][j]=rand() % 10 + 1;
		    
		//calculating the product of matrix A and matrix B
		for(int i=0;i<N;i++)
		    for(int j=0;j<N;j++)
		        for(int k=0;k<N;k++)
		            product[i][j]=product[i][j]+(matrix1[i][k] * matrix2[k][j]);
    	
	}
                
    clock_t end =clock();
    end = end/it;
    
    time= double (end-begin)/ CLOCKS_PER_SEC;
    
    cout<<"time: "<<time;
    return 0;
}
