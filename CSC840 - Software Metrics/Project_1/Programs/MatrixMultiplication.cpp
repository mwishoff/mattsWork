//Written by: matthew wishoff
#include<math.h>
#include <time.h>
#include<iostream>
#include <stdlib.h>
#define row 400
#define col 400
#define arrContents 69

using namespace std;

int main()
{

	int i, j, k, n, sum;
	double t1, t2, t3;
	int arrOne[row][col];
	int arrTwo[row][col];
	int arrThree[row][col];
	
	for(int i = 1; i <= row; i++)
	{
		for(int j = 1; j <= col; j++)
		{
			arrOne[i][j] = arrContents;
			arrTwo[i][j] = arrContents;
		}
	}
	
//	t1 = sec();
	
	for( i=0; i < row; i++)
	{
		for(j=0; j < col; j++)
		{
			for(k=0; k < col; k++)
			{
				arrThree[i][j] = arrThree[i][j] + (arrOne[i][k] * arrTwo[k][j]);
				//Check to see if it's working correctly
//				cout << "i : " << i	<< "	" << "j: " << j << "	" << "k: " << k << endl;	
			}	
		}
	}
				
//	t2 = sec();
}
