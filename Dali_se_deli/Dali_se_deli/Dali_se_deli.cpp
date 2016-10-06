// Dali_se_deli.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a % 2 == 0 && a % 3 == 0 && a % 5 != 0) {
		cout << "Deli se" << endl;
	}
	else {
		cout << "Ne se deli" << endl;
	}



	return 0;
}