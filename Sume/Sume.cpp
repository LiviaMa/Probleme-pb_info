// Sume.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int arraySize, sum = 0;
	int elements[1001];
	ifstream inputFile ("sume.in");
	ofstream outputFile("sume.out");
	inputFile >> arraySize;
	for (int i = 1; i <= arraySize; i++)
	{
		inputFile >> elements[i];
		sum += elements[i];
	}
   
	for (int i = arraySize; i >= 1; i--)
	{
		outputFile << sum <<endl;
		sum -= elements[i];
	}
	


}
