/*
	== Documentation ==
	Project:	Ch3Ex15
	Author:		S. Floyd
	Date:		12/29/2017

	== Monthly Sales Tax ==
	A county collects property taxes on the assessment value of property, which is
	60 percent of the property’s actual value. If an acre of land is valued at $10,000,
	its assessment value is $6,000. The property tax is then 75¢ for each $100 of the assessment value.
	The tax for the acre assessed at $6,000 will be $45. Write a program that asks for the
	actual value of a piece of property and displays the assessment value and property tax.
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
	int property;

	// Input
	cout << "Please enter the property value: ";
	cin >> property;

	// Print results
	cout << endl << "Assessment value:\t$" << property * 0.6;
	cout << endl << "Property tax:\t$" << ((property * 0.6) / 100) * 0.75 << endl;

	// End	
	return 0;
}