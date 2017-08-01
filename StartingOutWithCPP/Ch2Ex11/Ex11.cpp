/*
	== Documentation ==
	Project:	Ch2Ex11
	Author:		S. Floyd
	Date:		08/01/2017

	== Distance per Tank of Gas ==
	A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town
	and 28.9 miles per gallon when driven on the highway. Write a program that calculates
	and displays the distance the car can travel on one tank of gas when driven in town
	and when driven on the highway.

	Hint: The following formula can be used to calculate the distance:
	Distance = Number of Gallons * Average Miles per Gallon 
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
	int tankSize = 20; // in gallons
	double townAverage = 23.5; // miles per gallon
	double highwayAverage = 28.9; // miles per gallon

	// Calculate
	double townDistance = tankSize * townAverage;
	double highwayDistance = tankSize * highwayAverage;

	// Print results
	cout << "Distance in Town:	" << townDistance << endl;
	cout << "Distance on Highway:	" << highwayDistance << endl;

	// End
	return 0;
}