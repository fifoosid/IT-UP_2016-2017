// Tochka_v_kvadrant.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<math.h>

using namespace std;


int main()
{
	int x, y;
	cin >> x >> y;

	if (x == 0 && y == 0) {
		cout << "Tochkata leji v nachaloto na koordinatnata sistema" << endl;
	}
	else if (x == 0) {
		cout << "Tochkata leji na abscisata" << endl;
	}
	else if (y == 0) {
		cout << "tochkata leji na ordinatata" << endl;
	}
	else if (x > 0) {
		if (y > 0) {
			cout << "Tochkata leji v 1vi kvadrant" << endl; 
		}
		else if(y<0) {
			cout << "Tochkata leji v 4ti kvadrant" << endl; 
		}
	}
	else {
		if (y > 0) {
			cout << "Tochkata leji vuv 2ri kvadrant" << endl;
		}
		else if (y < 0) {
			cout << "Tochkata leji v 3ti kvadrant" << endl;
		}
	}




    return 0;
}

