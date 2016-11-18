#pragma once
#include <string>
#include <iostream>
using namespace std;

void primealloc_1()
{
	int n; 
	cout << "Enter max target number for prime" << endl;
	cin >> n;
	int mark[1000];  // need to allocate this size dynamicaly to n
	int prime[1000];

	for (int i=2; i<=sqrt(n); i++)
	{
		if (mark[i] != 1) // if not yet marked, then claim that number as prime
		{
			mark[i] = 1;
			prime[i] = 1;
			//cout << "Processing number " << i << endl;
			for (int ii=i*i; ii<=n; ii=ii+i) // mark all increments of i as non-prime
			{
				//cout << "stepping " << ii;
				mark[ii] = 1; 
				prime[ii] = 0;
				//cout << " mark = " << mark[ii] << " prime = " << prime[ii] << endl;
			}
		}
	} // End of this loop, then all numbers up to n should have been classified as prime or not
	for (int i=2; i<=n; i++)
	{
		if (prime[i] == 1 || mark[i] != 1)
			cout << i << " is marked as prime" << endl;
	}
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