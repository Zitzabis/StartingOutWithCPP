/*
	== Documentation ==
	Project:	Ch3Ex12
	Author:		S. Floyd
	Date:		12/29/2017

	== Celsius to Fahrenheit ==
	Write a program that converts Celsius temperatures to Fahrenheit temperatures. The formula is:
	F = 9/5 * C + 32
	F is the Fahrenheit temperature, and C is the Celsius temperature.
*/

// Include
#include <iostream>
#include <string>

/*
	It is poor practice to use the "standard" namespace.
	However it is included so as to adhere to what the book does.
*/
using namespace std;

// Main
int main() {
	// Vars
	double celsius;

	// Input celsius
	cout << "Please enter celsius amount: ";
	cin >> celsius;

	// Print results
	cout << endl << "Fahrenheit: " << (9.0/5.0) * celsius + 32.0 << endl;

	// End	
	return 0;
}