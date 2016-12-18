// Task_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void EnterArray(int Arr[20][20], int sizeR, int sizeC)
{

	for(int i = 0; i < sizeR; i++)
		for (int j = 0; j < sizeC; j++)
		{
			cin >> Arr[i][j];
		}
}

void PrintArray(int Arr[20][20], int sizeR, int sizeC)
{
	for (int i = 0; i < sizeR; i++)
	{
		for (int j = 0; j < sizeC; j++)
		{
			cout << Arr[i][j] << " ";
		}
		cout << endl;
	}
}
//Представяме си, че работим с едномерен масив,
//за да го сортираме
void SortArray(int Arr[20][20], int sizeR, int sizeC)
{
	int newSize = sizeR * sizeC;//размерът на едномерния масив
	int row, col, row2, col2;
	for (int i = 0; i < newSize; i++)
	{
		for (int j = 0; j < newSize - i - 1; j++)
		{
			row = j / sizeC;
			col = j % sizeC;
			row2 = (j + 1) / sizeC;
			col2 = (j + 1) % sizeC;

			if (Arr[row][col] > Arr[row2][col2])
			{
				swap(Arr[row][col], Arr[row2][col2]);
			}
		}
	}
	PrintArray(Arr, sizeR, sizeC);
}

int main()
{
	
	int arr[20][20]; 
	int sizeRows, sizeColumns;
	cout << "Please enter the size of the matrix up to 20x20!" << endl;
	//Въвеждаме размера на двумерния масив:
	cout << "Enter first dimension: ";
	cin >> sizeRows;
	cout << "Enter second dimension: ";
	cin >> sizeColumns;

	EnterArray(arr, sizeRows, sizeColumns);
	SortArray(arr, sizeRows, sizeColumns);

    return 0;
}

