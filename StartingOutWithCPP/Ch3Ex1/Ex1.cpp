/*
	== Documentation ==
	Project:	Ch3Ex1
	Author:		S. Floyd
	Date:		08/01/2017

	== Miles per Gallon ==
	Write a program that calculates a car’s gas mileage. The program should ask the user
	to enter the number of gallons of gas the car can hold and the number of miles it can
	be driven on a full tank. It should then display the number of miles that may be driven
	per gallon of gas.
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
	double numGallons;
	double numMiles;

	// Num of gallons
	cout << "How many gallons of gas can the car hold?\nInput: ";
	cin >> numGallons;
	cout << endl << endl;

	// Num of miles
	cout << "How many miles can the car drive on a full tank?\nInput: ";
	cin >> numMiles;
	cout << endl << endl;

	// Print results
	cout << "Miles per gallon:	" << numMiles / numGallons << endl;

	// End
	return 0;
}