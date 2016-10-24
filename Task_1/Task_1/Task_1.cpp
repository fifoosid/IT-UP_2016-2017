// Task_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

void Translate(char num, char lang)
{
	if (lang == 'e')
	{
		switch (num)
		{
		case '1':
			cout << "one" << endl;
			break;
		case '2':
			cout << "two" << endl;
			break;
		case '3':
			cout << "three" << endl;
			break;
		case '4':
			cout << "four" << endl;
			break;
		case '5':
			cout << "five" << endl;
			break;
		case '6':
			cout << "six" << endl;
			break;
		case '7':
			cout << "seven" << endl;
			break;
		case '8':
			cout << "eight" << endl;
			break;
		case '9':
			cout << "nine" << endl;
			break;
		}

	}
	else if (lang == 'f')
	{
		switch (num)
		{
		case '1':
			cout << "un" << endl;
			break;
		case '2':
			cout << "deux" << endl;
			break;
		case '3':
			cout << "trois" << endl;
			break;
		case '4':
			cout << "quatre" << endl;
			break;
		case '5':
			cout << "cinq" << endl;
			break;
		case '6':
			cout << "six" << endl;
			break;
		case '7':
			cout << "sept" << endl;
			break;
		case '8':
			cout << "huit" << endl;
			break;
		case '9':
			cout << "neuf" << endl;
			break;
		}
	}
	else if (lang == 'd')
	{
		switch (num)
		{
		case '1':
			cout << "eins" << endl;
			break;
		case '2':
			cout << "zwei" << endl;
			break;
		case '3':
			cout << "drei" << endl;
			break;
		case '4':
			cout << "vier" << endl;
			break;
		case '5':
			cout << "funf" << endl;
			break;
		case '6':
			cout << "sechs" << endl;
			break;
		case '7':
			cout << "sieben" << endl;
			break;
		case '8':
			cout << "acht" << endl;
			break;
		case '9':
			cout << "neun" << endl;
			break;
		}
	}
	else if (lang == 'b')
	{
		switch (num)
		{
		case '1':
			cout << "edno" << endl;
			break;
		case '2':
			cout << "dve" << endl;
			break;
		case '3':
			cout << "tri" << endl;
			break;
		case '4':
			cout << "chetiri" << endl;
			break;
		case '5':
			cout << "pet" << endl;
			break;
		case '6':
			cout << "shest" << endl;
			break;
		case '7':
			cout << "sedem" << endl;
			break;
		case '8':
			cout << "osem" << endl;
			break;
		case '9':
			cout << "devet" << endl;
			break;
		}
	}

}

int main()
{
	char number;
	char language;
	cin >> number ;
	cin >> language ;
	Translate(number, language);
	


    return 0;
}

