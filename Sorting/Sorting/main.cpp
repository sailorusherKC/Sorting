#include"CountingSorts.h"
#include"SortUtility.h"
#include<string>
#include<vector>
#include<iostream>
#include<fstream>
using namespace std;

/*
* 
*/

int main()
{
	//declare the containers to sort
	vector<int> alpha, beta, gamma;
	int alphaMax = 0, betaMax = 0, gammaMax = 0;

	//resize the vectors
	ResizeIntVector(alpha, 10);
	ResizeIntVector(beta, 100);
	ResizeIntVector(gamma, 1000);

	//randomize the vectors
	RandomizeIntVector(alpha);
	RandomizeIntVector(beta);
	RandomizeIntVector(gamma);

	//print them out
	PrintIntVector(cout, "alpha", alpha);
	PrintIntVector(cout, "beta", beta);
	PrintIntVector(cout, "gamma", gamma);

	//set maxes first
	alphaMax = FindMax(alpha);
	betaMax = FindMax(beta);
	gammaMax = FindMax(gamma);

	//sort them
	CountingSort(alpha, alphaMax);
	CountingSort(beta, betaMax);
	CountingSort(gamma, gammaMax);

	//print them out
	PrintIntVector(cout, "alpha", alpha);
	PrintIntVector(cout, "beta", beta);
	PrintIntVector(cout, "gamma", gamma);
}