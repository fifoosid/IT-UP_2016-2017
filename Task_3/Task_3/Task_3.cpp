// Task_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;



int main()
{

	int answer1, answer2, answer3;

	cout << "Lubopiten li ste?" << endl;
	cin >> answer1;
	cout << "Obichate li nepriqtnosti?" << endl;
	cin >> answer2;
	cout << "Strah li vi e ot paqci?" << endl;
	cin >> answer3;

	if (answer1) 
	{
		if (answer2)
		{
			if (answer3)
			{
				cout << "Rejvynklou" << endl;
			}
			else
			{
				cout << "Grifindor" << endl;
			}
		}
		else
		{
			if (answer3)
			{
				cout << "Hafylpaf" << endl;
			}
			else
			{
				cout << "Grifindor" << endl;
			}
		}
	}
	else
	{
		if (answer2)
		{
			if (answer3)
			{
				cout << "Sliderin" << endl;
			}
			else
			{
				cout << "Hafylpaf" << endl;
			}
		}
		else
		{
			if (answer3)
			{
				cout << "Reivaynklou" << endl;
			}
			else
			{
				cout << "Sliderin" << endl;
			}
		}
	}

    return 0;
}

