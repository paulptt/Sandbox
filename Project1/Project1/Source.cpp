#include <string>
#include <iostream>
#include "Header1.h"
#include "primef.h"
using namespace std;

void RaiseBase();
void Query();
void primealloc_1();

int main()
{
	int n;
	cout << "Enter max number to build prime number database";
	cin >> n;
	cout << endl;

	//primealloc_1();
	//RaiseBase();

	primef primefunc1(n); // create object primefunc1 to class primef
	primef primefunc2(n); // create object primefunc2 to class primef
	primef *pfunc2 = &primefunc2; // Use pointer to access object primefunc2

	primefunc1.primealloc_2(); // call primealloc_2 function from class primef object primefunc1
	pfunc2->primealloc_2(); // call primealloc_2 function from class primef object primefunc2 using pointer pfunc2

	Query();
	return 0;
}