#include"CountingSorts.h"
#include<vector>
#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

//Counting Sort for int vectors
void CountingSort(vector<int> &S, int maxValue)
{
	if (S.size() == 0)
		return;

	maxValue++;
	int* key = new int[maxValue];
	for (int i = 0; i < maxValue; i++)
		key[i] = 0;

	for (int i = 0; i < S.size(); i++)
		key[S.at(i)]++;

	int j = 0;
	for (int i = 1; i < maxValue; i++) {
		while(key[i] > 0)
		{
			S.at(j) = i;
			key[i]--;
			j++;
		}
	}
}

//Radix sort for int vectors
void RadixLSDCountingSort(vector<int>& S, int digit)
{
	int temp;
	for (int i = 0; i < S.size(); i++)
	{
		temp = S[i] % pow(10, digit);
	}
}
void RadixSortLSD(vector<int>& S) {
	int max = S[0], maxDigit = 1, countingKey[10] = {0};
	//find max
	for (int i = 0; i < S.size(); i++)
		if (max < S[i])
			max = S[i];
	//find digit count of max
	while (max >= 10)
	{
		maxDigit++;
		max /= 10;
	}
	
	//Counting sort the array by looking at one digit at a time

}
