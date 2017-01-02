// Second.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int Inversion(int *obj, int size)
{
	int inversions = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (obj[i] > obj[j])
			{
				inversions++;
			}
		}
	}


	return inversions;
}

int main()
{
	int Size;
	cout << "Please enter the size of the array: ";
	cin >> Size;


	int Numbers[100] = { 0 };
	cout << "Please enter the array: " << endl;
	for (int i = 0; i < Size; i++)
	{
		cout << i + 1 << " element: ";
		cin >> Numbers[i];
	}

	cout << Inversion(Numbers, Size) << endl;;

    return 0;
}

