// Afisare1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{  
	int n;
	int v[1001];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
	}
	if (n % 2 == 0)
	{
		for (int i = 1; i <= n / 2; i++)
		{
			cout << v[i] << " " << v[n - i + 1] << " ";
		}
	}
	else
	{
		for (int i = 1; i <= (n / 2) + 1; i++) 
		{
			if (v[i] == v[n - i + 1])
			{
				cout << v[i] << " ";
			}
			else
			{
				cout << v[i] << " " << v[n - i + 1] << " ";
			}
		}
		
	}
}
