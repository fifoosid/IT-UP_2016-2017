// Task_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

void PrintArray(int Arr[25][25], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (Arr[i][j] <= 9)
			{
				cout << Arr[i][j] << "   ";
			}
			else if(Arr[i][j] <= 99)
			{
				cout << Arr[i][j] << "  ";
			}
			else
			{
				cout << Arr[i][j] << " ";
			}
		}
		cout << endl;
	}
}

void PrintMatrixSpiral(int Arr[25][25], size_t size)
{	
	int top = 0;
	int bottom = size - 1;
	int left = 0;
	int right = size - 1;
	int dir = 0;
	int numberToPrint = 1;

	while (left <= right && top <= bottom && numberToPrint <= size * size)
	{
		if (dir == 0)
		{
			for (size_t k = left; k <= right; k++)
			{
				Arr[top][k] = numberToPrint ; 
				numberToPrint++;
			}
			top++;
		}
		else if (dir == 1)
		{
			for (size_t k = top; k <= bottom; k++)
			{
				Arr[k][right] = numberToPrint;
				numberToPrint++;
			}
			right--;
		}
		else if (dir == 2)
		{
			for (int k = right; k >= left; k--)
			{
				Arr[bottom][k] = numberToPrint;
				numberToPrint++;
			}
			bottom--;
		}
		else if (dir == 3)
		{
			for (int k = bottom; k >= top; k--)
			{
				Arr[k][left] = numberToPrint;
				numberToPrint++;
			}
			left++;
		}
		dir = (dir + 1) % 4;
	}

	PrintArray(Arr, size);
}


int main()
{
	int arra[25][25] = {0};
	size_t SizeOfArray;
	cout << "Please enter size of the matrix (Up to 25x25): ";
	cin >> SizeOfArray;
	PrintMatrixSpiral(arra, SizeOfArray);
    return 0;
}

