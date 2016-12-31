// 5_Task.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>


using namespace std;


void Print(char letter)
{
	int difference = 64;
	int num = int(letter);
	
	
	//char Lett = char(letter); cout << Lett << endl;
	do
	{
		for (int i = 0; i < num - difference; i++)
		{
			cout << letter;
			letter = letter - 1;
		}
		letter = num - 1;
		cout << endl;

		num--;
	} while (num - difference);
}


int main()
{
	char Letter;
	
	cout << "Please enter a capital letter: ";
	cin >> Letter;

	Print(Letter);

    return 0;
}

