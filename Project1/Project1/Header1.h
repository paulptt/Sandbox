#pragma once
#include <string>
#include <iostream>
using namespace std;

void primealloc()
{
	int n; 
	cout << "Enter max target number for prime" << endl;
	cin >> n;
	int parray[1000][1000][1000];  // need to allocate this size dynamicaly to n
}

void RaiseBase()
{
	int base = 1;
	int exp = 1;
	int result = 1;
	string done;

	cout << "Enter base ";
	cin >> base;

	cout << "Enter exp ";
	cin >> exp;

	for (int i=0; i < exp; i++)
	{
		result *= base;
		//cout << "base = " << base << ", and i =" << i << endl;
	}
	cout << "Result = " << result << endl;
	cout << "Type Done to terminate ";
	cin >> done;
}

void Query()
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