#include "stdafx.h"
#include <iostream>
#include <math.h>



using namespace std;

int main()
{
	int number;
	cin >> number;

	switch (number)
	{
	case 3:
		cout << "Dividable by 3\n";
		break;

	case 9:
		cout << "Dividable by 3 and 9\n";
		break;

	case 16:
		cout << "Dividable by 2, 4 and 8\n";
		break;

	case 27:
		cout << "Dividable by 3 and 9\n";
		break;

	case 255:
		cout << "Dividable by 3, 5, 51 and 85\n";
		break;

	case 256:
		cout << "Dividable by 2, 4, 8, 16, 32, 64, 128\n";
		break;

	case 1024:
		cout << "Dividable by 2, 4, 8, 16, 32, 64, 128, 256, 512\n";
		break;

	default:
		cout << "You have entered wrong number" << endl;
		break;

	}

	return 0;
}