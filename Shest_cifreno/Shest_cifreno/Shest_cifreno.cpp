#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int number, firstDigit, SecondDigit, ThirdDigit, FourthDigit, FifthDigit, SixthDigit;
	
		cin >> number;
	
		/*
		firstDigit = number / 100000; 
		SecondDigit = number / 10000 % 10; 
		ThirdDigit = number / 1000 % 10; 
		FourthDigit = number / 100 % 10; 
		FifthDigit = number / 10 % 10; 
		SixthDigit = number % 10; cout << SixthDigit << endl;
	*/
		int first3Digits = number / 1000, second3Digits = number % 1000;
		if (first3Digits > second3Digits) {
			cout << "Chisloto obrazuvano ot pyrvite 3 cifri e po golqmo ot chisloto obrazuvane ot poslednite 3 cifri" << endl;
		}

		else {
			cout << "Chisloto obrazuvano ot pyrvite 3 cifri NE e po golqmo ot chisloto obrazuvane ot poslednite 3 cifri" << endl;
		}

	return 0;
}