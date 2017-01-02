// Third.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


void Sorting(int arr[], int size)
{
	int temp;
	
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < (size - i); j++)
			if (*(arr + j)>*(arr + j + 1))
			{
				temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
	}
	

	for (int i = 0; i < size; i++)
	{
		cout << arr[i]<<" ";
	}
}

int main()
{
	int Size;
	cout << "Enter size: ";
	cin >> Size;


	int arra[100];
	cout << "Enter array: ";
	for (int i = 0; i < Size; i++)
	{
		cin >> arra[i];
	}

	Sorting(arra, Size);
    return 0;
}

