#include"CountingSorts.h"
#include<string>
#include<vector>
#include<iostream>
#include<fstream>
#include<ctime>
#include<cstdlib>
using namespace std;

void ResizeIntVector(vector<int>& S, const int size) {
	//while the vector is not the correct size
	while (S.size() != size)
		//pop elements if it is too big, or push them if it is too small
		(S.size() > size) ? S.pop_back() : S.push_back(0);
}


void RandomizeIntVector(vector<int> &S) {
	//seed random with a new value
	srand(time(0));
	
	//loop through the array
	for (int& I : S)
		I = rand();
}

void PrintIntVector(ostream &out, string vectorName, vector<int> S) {
	cout << endl << vectorName << endl;
	for (int i = 0; i < S.size(); i++)
	{
		out << S.at(i);
		i++;
		if (i < S.size())
		{
			out << "\t" << S.at(i);
			i++;
			if (i < S.size())
			{
				out << "\t" << S.at(i);
				i++;
			}
		}
		cout << endl;
	}
}

int FindMax(vector<int> S) {
	//track the largest int
	int max = S[0];
	//loop through S
	for (int I : S)
		//if S-i is larger than the max
		if (max < I)
			//set max to S-i
			max = I;
	//return the max
	return max;
}
