// KvadratnoUravnenie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b, c, D;
	cin >> a >> b >> c;
	D = b*b - 4 * a*c;
	if (D >= 0) {
		if (D == 0) {
			cout << "Uravnenieto ima 1 koren"<<endl;
		}
		else {
			cout << "Uravnenieto ima 2 korena" << endl;
		}
	}
	else {
		cout << "Uravnenieto nqma koreni" << endl;
	}

	return 0;
}