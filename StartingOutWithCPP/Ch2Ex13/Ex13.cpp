/*
	== Documentation ==
	Project:	Ch2Ex13
	Author:		S. Floyd
	Date:		08/01/2017

	== Circuit Board Price ==
	An electronics company sells circuit boards at a 35 percent profit. Write a program that
	will calculate the selling price of a circuit board that costs $14.95. Display the result
	on the screen.
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
	double profitPercent = 0.35;
	double circuitBoard = 14.95;

	// Calculate
	double sellingPrice = circuitBoard + (circuitBoard * profitPercent);

	// Print results
	cout << "Original Price:	" << circuitBoard << endl;
	cout << "Selling Price:	" << sellingPrice << endl;

	// End
	return 0;
}