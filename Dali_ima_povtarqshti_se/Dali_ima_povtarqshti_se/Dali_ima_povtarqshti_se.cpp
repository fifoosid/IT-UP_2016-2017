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

	if (firstDigit == SecondDigit || SecondDigit == ThirdDigit || firstDigit == ThirdDigit) {
		cout << "Ima povtarqshti se cifri" << endl;
	}
	else {
		cout << "Nqma povtarqshti se cifri" << endl;
	}

	return 0;
}