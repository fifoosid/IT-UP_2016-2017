// First.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void DisplayHistogram(const char* str)
{
	int histogram[256] = { 0 };

	for (int i = 0; str[i]; i++)
	{
		histogram[(int)str[i]]++;
	}

	for (int i = 0; i < 256; i++)
	{
		if (histogram[i])
		{
			if (histogram[i] > 1)
			{
				cout << (char)i << ": " << histogram[i] << " times" << endl;
			}
			else
			{
				cout << (char)i << ": " << histogram[i] << " time" << endl;
			}
		}
	}
}


int main()
{

	char Word[100];
	
	cout << "Please, enter your text: ";
	cin.getline(Word, 100);
	DisplayHistogram(Word);
    return 0;
}

