// Fourth.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void replaceOccurences(char* str, char charToReplace, char* stringToReplaceWith)
{
	int Cycle = strlen(str);
	int ReplaceStringLength = strlen(stringToReplaceWith);
	string result = (string)str;

	for (int i = 0; i < Cycle; i++)
	{
		if (str[i] == charToReplace)
		{			
			result.replace(i,ReplaceStringLength, stringToReplaceWith);
		}
	}

	cout << result << endl;
}




int main()
{
	replaceOccurences("Are you SeriosS", 'S', "FSS");
    return 0;
}

