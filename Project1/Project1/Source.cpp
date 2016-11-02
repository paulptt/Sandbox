#include <string>
#include <iostream>
using namespace std;

int main()
{
	int base= 1;
	int exp= 1;
	int i = 0;
	int result = 1;
	string done;

	cout << "Enter base ";

	cin >> base;

	cout << "Enter exp ";
	cin >> exp;

	for (; i < exp; i++)
	{
		result = result*base;
		//cout << "base = " << base << ", and i =" << i << endl;
	}
	cout << "Result = " << result << endl;
	cout << "Type Done to terminate ";
	cin >> done;

	// 2nd part of the code
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

	return 0;
}