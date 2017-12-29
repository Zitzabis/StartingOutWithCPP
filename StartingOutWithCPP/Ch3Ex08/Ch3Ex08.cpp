/*
	== Documentation ==
	Project:	Ch3Ex8
	Author:		S. Floyd
	Date:		12/29/2017

	== How Many Widgets? ==
	The Yukon Widget Company manufactures widgets that weigh 12.5 pounds each.
	Write a program that calculates how many widgets are stacked on a pallet, based
	on the total weight of the pallet. The program should ask the user how much the
	pallet weighs by itself and with the widgets stacked on it. It should then calculate
	and display the number of widgets stacked on the pallet. 
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
	double widgetWeight = 12.5; // pounds
	double palletWeight;

	// Input name
	cout << "Weight of the pallet (pounds): ";
	cin >> palletWeight;

	// Print results
	cout << endl << "Estimated number of widgets in pallet: " << palletWeight / widgetWeight << endl;

	// End	
	return 0;
}