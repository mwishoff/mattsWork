#include <iostream>
#include <random>
#include <chrono>

using namespace std;

int main()
{
	//	chrono::steady_clock has previously been established to have an error of 2.689e-07 seconds
	//	for these experiments, we must assume a total error of 5.378e-07 seconds
	//	due to the worst case scenario for two time measurements (start/stop)

	//	initialize random generator, set generator type/range here
	random_device rd;
	mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1, 1000);

	//	initialize timers
	chrono::steady_clock::time_point startTime, stopTime;
	double initTime1;
	double multTime1;
	double initTime2;
	double multTime2;

	double initTimes[25];
	double multTimes[25];
	int iteration = 0;

	for (int rowCount = 20; rowCount <= 400; rowCount += 20) {

		//	matrix A/B initialization
		int initRepCount = 250 / sqrt(rowCount);
		int multRepCount = 250 / sqrt(rowCount);
		int** matA = new int*[rowCount];
		int** matB = new int*[rowCount];
		int** matC = new int*[rowCount];

		startTime = chrono::steady_clock::now();
		for (int K = 0; K < initRepCount; K++)
		{
			for (int i = 0; i < rowCount; i++)
			{
				matA[i] = new int[rowCount];
				matB[i] = new int[rowCount];
	
				//	initialize rows to random values
				for (int j = 0; j < rowCount; j++)
				{
					matA[i][j] = dis(gen);
					matB[i][j] = dis(gen);
				}
			}
		}
		stopTime = chrono::steady_clock::now();
		initTime1 = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / initRepCount;
		/*
		// does initialization step twice
		startTime = chrono::steady_clock::now();
		for (int K = 0; K < initRepCount; K++)
		{
			for (int i = 0; i < rowCount; i++)
			{
				matA[i] = new int[rowCount];
				matB[i] = new int[rowCount];
				matC[i] = new int[rowCount];

				//	initialize rows to random values
				for (int j = 0; j < rowCount; j++)
				{
					matA[i][j] = dis(gen);
					matB[i][j] = dis(gen);
				}

				matA[i] = new int[rowCount];
				matB[i] = new int[rowCount];
				matC[i] = new int[rowCount];

				//	initialize rows to random values
				for (int j = 0; j < rowCount; j++)
				{
					matA[i][j] = dis(gen);
					matB[i][j] = dis(gen);
				}
			}
		}
		stopTime = chrono::steady_clock::now();
		initTime2 = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / initRepCount;
		*/
		startTime = chrono::steady_clock::now();
		for (int K = 0; K < multRepCount; K++)
		{
			int product = 0;
			//	Populate C with appropriate values
			for (int i = 0; i < rowCount; i++) {
				for (int j = 0; j < rowCount; j++) {
					product = 0;
					for (int k = 0; k < rowCount; k++) {
						product += matA[i][k] * matB[k][j];
					}
					matC[i][j] = product;
				}
			}
		}
		stopTime = chrono::steady_clock::now();
		multTime1 = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / multRepCount;
		/*
		// does innermost op twice
		startTime = chrono::steady_clock::now();
		for (int K = 0; K < multRepCount; K++)
		{
			int product = 0;
			//	Populate C with appropriate values
			for (int i = 0; i < rowCount; i++) {
				for (int j = 0; j < rowCount; j++) {
					product = 0;
					for (int k = 0; k < rowCount; k++) {
						product += matA[i][k] * matB[k][j];
						product += matA[i][k] * matB[k][j];
					}
					//	right shift to divide result by 2
					matC[i][j] = product >> 1;
				}
			}
		}
		stopTime = chrono::steady_clock::now();
		multTime2 = chrono::duration_cast<chrono::duration<double>>(stopTime - startTime).count() / multRepCount;
		*/
		//initTimes[iteration] = initTime2 - initTime1;
		//multTimes[iteration] = multTime2 - multTime1;
		initTimes[iteration] = initTime1;
		multTimes[iteration] = multTime1;
		iteration++;
		//end of execution for each rowcount test
	}

	cout << "init times:\n";
	for (int i = 0; i < 25; i++)
	{
		cout << initTimes[i] << ",";
	}
	cout << "\n\nmult times:\n";
	for (int i = 0; i < 25; i++)
	{
		cout << multTimes[i] << ",";
	}
	return 0;
}
