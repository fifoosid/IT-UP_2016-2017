// 2_Task.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <string.h>


using namespace std;

void Search(string Text, string Symbol)
{
	for (int i = 0; i < Text.length(); i++)
	{
		if (Text[i] == Symbol[0])
		{
			cout << "The sign " << Symbol << " is on positon " << i + 1 << ". After it is: ";
			for (int j = i; j < Text.length(); j++)
			{
				cout << Text[j];
			}
			cout << endl;
			break;
		}
		
	}
}




int main()
{
	string Text, Symbol;

	cout << "Enter text: ";
	cin >> Text;

	cout << "Enter symbol: ";
	cin >> Symbol;

	Search(Text, Symbol);

	

    return 0;
}

