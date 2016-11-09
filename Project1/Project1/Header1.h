#pragma once
#include <string>
#include <iostream>
using namespace std;

void Raisebase()
{
	int base = 1;
	int exp = 1;

	int result = 1;

	cout << "Enter base ";
	cin >> base;

	cout << "Enter exp ";
	cin >> exp;

	for (; exp != 0; exp--)
	{
		result *= base;
	}
	cout << "Result = " << result << endl;
}

////

void Checkinput()
{
	char input;

	cout << "Enter y, Y, n, or N" << endl;
	cin >> input;

	switch (input) {
	case 'y':
		cout << "You chose y" << endl;
		break;
	case 'Y':
		cout << "You chose Y" << endl;
		break;
	case 'n':
		cout << "You chose n" << endl;
		break;
	case  'N':
		cout << "You chose N" << endl;
		break;
	default:
		cout << "You didn't choose a valid option" << endl;
	}

}