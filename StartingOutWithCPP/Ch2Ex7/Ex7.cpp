/*
	== Documentation ==
	Project:	Ch2Ex7
	Author:		S. Floyd
	Date:		08/01/2017

	== Ocean Levels ==
	Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:

	- The number of millimeters higher than the current level that the ocean’s level will be in 5 years
	- The number of millimeters higher than the current level that the ocean’s level will be in 7 years
	- The number of millimeters higher than the current level that the ocean’s level will be in 10 years
*/

// Include
#include <iostream>

/*
	It is poor practice to use the "standard" namespace.
	However it is included so as to adhere to what the book does.
*/
using namespace std;

// Main
int main() {
	// Vars
	double rateOfRising = 1.5; // in millimeters per year

	// Calculate and print
	cout << "5 years:	+" << rateOfRising * 5 << "mL" << endl;
	cout << "7 years:	+" << rateOfRising * 7 << "mL" << endl;
	cout << "10 years:	+" << rateOfRising * 10 << "mL" << endl;

	// End
	return 0;
}