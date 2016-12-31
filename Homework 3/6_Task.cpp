// 6_Task.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cuchar>

using namespace std;

int Compare(const void* a, const void* b)
{
	return(*(int*)a - *(int*)b);
}

void Search(const char* sentence)
{
	int count = 0;//съхранява броя на отпечатаните елементи
	char result[] = { 0 };
	
	for (int i = 0; i < strlen(sentence) - 2; i++)
	{
		
		for (int j = i + 1; j < strlen(sentence)  ; j++)
		{
			
			if (sentence[i] == sentence[j] && !isspace(sentence[i]))//Второто условие премаха интервалите от общия брой еднакви символи
			{
				cout << sentence[i];
				count++;
				
			}
		}
	}
	cout << " " << count << " signs" << endl;
}

int main()
{
	char Sentence[100];
	cin.get(Sentence, 100);

	Search(Sentence);





    return 0;
}

