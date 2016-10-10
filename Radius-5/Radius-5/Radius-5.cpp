// Radius-5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int x, y, r = 5;
	cin >> x >> y;
	if (((x - 0)*(x - 0) + (y - 0)*(y - 0)) < r*r) {
		cout << "Tochkata e v kryga" << endl;
	}
	else {
		cout << "Tochkata e izvun kryga" << endl;
	}




    return 0;
}

