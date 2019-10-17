// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <cmath>
using namespace std;

int main()
{
	int i = 0;
	cout << "Enter a positive integer: " << endl;
	cin >> i;

	// Main Program
	do {
		if (i % 2 == 0)
		{
			i = i / 2;
			cout << i << endl;
		}
		else {
			i = i * 3 + 1;
			cout << i << endl;
		}
	} while (i != 1);

	// Return Final Value
	cout << i;

}

