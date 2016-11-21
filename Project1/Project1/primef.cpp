#include "primef.h"
#include <string>
#include <iostream>
using namespace std;

primef::primef(int max):maxnum(max)	// Constructor definition of class primef
{
	cout << "Start class primef and get initial maxnum = " << maxnum << endl;

}


// Function routine that carries class primef
void primef::primealloc_2()
{
//	int n;
//	cout << "Enter max target number for prime" << endl;
//	cin >> n;

	//const int capsize = 1000;
	//mark = new int [capsize];  // allocate this size dynamicaly 
	//prime= new int [capsize];

	int *mark, *prime;
	mark = new int[maxnum];
	prime = new int[maxnum];
	
	for (int i = 2; i <= sqrt(maxnum); i++)
	{
		if (mark[i] != 1) // if not yet marked, then claim that number as prime
		{
			mark[i] = 1;
			prime[i] = 1;
			//cout << "Processing number " << i << endl;
			for (int ii = i*i; ii <= maxnum; ii = ii + i) // mark all increments of i as non-prime
			{
				//cout << "stepping " << ii;
				mark[ii] = 1;
				prime[ii] = 0;
				//cout << " mark = " << mark[ii] << " prime = " << prime[ii] << endl;
			}
		}
	} // End of this loop, then all numbers up to n should have been classified as prime or not
	  // At this point, all numbers not marked or already marked prime are primes
	for (int i = 2; i <= maxnum; i++)
	{
		if (prime[i] == 1 || mark[i] != 1)
			cout << i << " is marked as prime" << endl;
	}

	//Since this is part of the class, there is no need to deallocate as deconstructor doing that, but use if not part of a class
	//delete [] mark, prime; // deallocate Arrays; if not an array, then no []
	//mark = NULL; // remove array pointer mark
	//prime = NULL; // remove array pointer prime
}


primef::~primef() // Destructor definition of class primef
{
}
