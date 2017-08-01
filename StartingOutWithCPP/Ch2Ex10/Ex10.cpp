/*
	== Documentation ==
	Project:	Ch2Ex10
	Author:		S. Floyd
	Date:		08/01/2017

	== Miles per Gallon ==
	A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a
	program that calculates the number of miles per gallon the car gets. Display the result
	on the screen.
	Hint: Use the following formula to calculate miles per gallon (MPG):
	MPG  Miles Driven/Gallons of Gas Used 
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
	int gallons = 15;
	int travelDistance = 375; // in miles

	// Calculate
	// Forumula:
	// MPG = Miles Driven / Gallons of Gas Used
	double mpg = travelDistance / gallons;

	// Print result
	cout << "Miles Per Gallon:	" << mpg << endl;

	// End
	return 0;
}