// Task_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


void EnterArray(int arr[6][5], const int rows, const int columns )
{
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
		{
			cin >> arr[i][j];
		}
}

int SearchForElement(int arr[6][5], int rows, int columns, int numToSearch)
{
	int count = 0;
	int result;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			
			if (numToSearch == count) 
			{
				result = arr[i][j];
			}
			count++;
		}
	}
	return result;
}

int main()
{
	const int Rows = 6;
	const int Columns = 5;
	int Nums[6][5];
	int SearchElement;
	
	cout << "Please enter array to search in: ";
	EnterArray(Nums, Rows, Columns);

	cout << "Please enter the position you are looking for: ";
	cin >> SearchElement;

	cout << SearchForElement(Nums, Rows, Columns, SearchElement) << endl;




    return 0;
}

