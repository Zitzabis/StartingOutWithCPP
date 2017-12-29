/*
	== Documentation ==
	Project:	Ch3Ex10
	Author:		S. Floyd
	Date:		12/29/2017

	== How Much Insurance? ==
	Many financial experts advise that property owners should insure their homes
	or buildings for at least 80 percent of the amount it would cost to replace the
	structure. Write a program that asks the user to enter the replacement cost of a
	building and then displays the minimum amount of insurance he or she should buy
	for the property.
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
	double buildingValue;

	// Input building cost
	cout << "Replacement cost of a building: $";
	cin >> buildingValue;

	// Print results
	cout << endl << "Insurance to be bought for the building: $" << buildingValue * 0.8 << endl;

	// End	
	return 0;
}