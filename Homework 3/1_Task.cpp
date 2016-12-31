// 1_Task.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void Display(string TextToDisplay)
{
	cout << "First: " << TextToDisplay[0] << " Middle: " << TextToDisplay[(unsigned)TextToDisplay.length() / 2] << " Last: " << TextToDisplay[(unsigned)TextToDisplay.length() - 1] << endl;
}


int main()
{
	string Text ;
	cout << "Enter text: ";
	cin >> Text;
	Display(Text);




    return 0;
}

