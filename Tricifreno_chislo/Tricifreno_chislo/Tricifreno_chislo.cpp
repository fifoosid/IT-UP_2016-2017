#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int number, firstDigit, SecondDigit, ThirdDigit;
	cin >> number;
	firstDigit = number / 100; 
	SecondDigit = number / 10 % 10; 
	ThirdDigit = number % 10; 

	if (firstDigit <= SecondDigit && SecondDigit<=ThirdDigit ) {
		cout << "Cifrite sa podredeni vuv vuzhodqsht red" << endl;
	}
	else {
		cout << "Cifrite ne sa podredeni vuv vuzhodqsht red" << endl;
	}

	return 0;
}