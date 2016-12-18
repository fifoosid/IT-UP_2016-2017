// Task_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

void EnterArray(int arr[105][2], int rows, const int columns = 2)
{
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
		{
			cin >> arr[i][j];
		}
}

void Print(int arr[105][2], int rows, const int columns = 2)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns - 1; j++)
		{
			cout << arr[i][j] << " / " << arr[i][j + 1] << " = " << (arr[i][j] * 100) / arr[i][j + 1] << " %";
		}
		cout << endl;
	}
}


int main()
{
	const int  pair = 2;
	int Numbers[105][pair];
	int N; //how many pairs we will enter
	cout << "Please enter how many pairs you will need: ";
	cin >> N;

	EnterArray(Numbers, N, pair);
	Print(Numbers, N, pair);
	
    return 0;
}

