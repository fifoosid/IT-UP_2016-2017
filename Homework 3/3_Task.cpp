// 3_Task.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void FindSymbol(string text, string symbol)
{
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == symbol[0])
		{
			cout << "Position: " << i + 1 << endl;
		}
	}
}


int main()
{
	string Text, Symbol = "T";

	cout << "Enter text: ";
	cin >> Text;

	

	FindSymbol(Text, Symbol);

    return 0;
}

