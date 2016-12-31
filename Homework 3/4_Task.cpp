// 4_Task.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>





//Приближава Нова Година, и батерията на лаптопа ми пада, а няма ток, така че оставям тази задача до тук. Весели Празници :)




using namespace std;

void Diamond(string letter)
{
	int difference = 64;
	char numb = letter.at(0);
	int number = int(numb);


	int symbols = 0;
	do
	{
		char *integer = itoa(difference + number);
		string str = string(integer);

		symbols++;
		number--;
	}
	while(number)


}


int main()
{
	string Letter;

	cout << "Enter letter: ";
	cin >> Letter;

	Diamond(Letter);
		


    return 0;
}

