#include "primef.h"
#include <string>
#include <iostream>
using namespace std;


primef::primef()
{
}

void primef::primealloc_2()
{
	int n;
	cout << "Enter max target number for prime" << endl;
	cin >> n;
	int mark[1000];  // need to allocate this size dynamicaly to n
	int prime[1000];

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (mark[i] != 1) // if not yet marked, then claim that number as prime
		{
			mark[i] = 1;
			prime[i] = 1;
			//cout << "Processing number " << i << endl;
			for (int ii = i*i; ii <= n; ii = ii + i) // mark all increments of i as non-prime
			{
				//cout << "stepping " << ii;
				mark[ii] = 1;
				prime[ii] = 0;
				//cout << " mark = " << mark[ii] << " prime = " << prime[ii] << endl;
			}
		}
	} // End of this loop, then all numbers up to n should have been classified as prime or not
	  // At this point, all numbers not marked or already marked prime are primes
	for (int i = 2; i <= n; i++)
	{
		if (prime[i] == 1 || mark[i] != 1)
			cout << i << " is marked as prime" << endl;
	}
}


primef::~primef()
{
}
