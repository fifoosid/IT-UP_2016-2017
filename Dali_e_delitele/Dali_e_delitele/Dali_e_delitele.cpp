// Dali_e_delitele.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (b / a == 0) {
		cout << b << " e delitel na " << a << endl;
	}
	else {
		cout << b << " ne e delitel na " << a << endl;
	}
    return 0;
}

