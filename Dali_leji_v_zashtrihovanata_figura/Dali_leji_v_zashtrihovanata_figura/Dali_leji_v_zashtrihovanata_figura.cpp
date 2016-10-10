// Dali_leji_v_zashtrihovanata_figura.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<math.h>

using namespace std;


int main()
{
	int x, y, r1=2, r2=1;
	cin >> x >> y;
	if (((x - 0)*(x - 0) + (y - 0)*(y - 0) < r1*r1) || ((x - 0)*(x - 0) + (y - 3)*(y - 3) < r2*r2)) {
		cout << "Tochkata leji v zashtrihovanata chast na figurata" << endl;
	}
	else {
		cout << "Tochkata NE leji v zashtrihovanata chast na figurata" << endl;
	}

		

    return 0;
}

