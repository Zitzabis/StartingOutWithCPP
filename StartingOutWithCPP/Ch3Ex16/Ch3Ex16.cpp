/*
	== Documentation ==
	Project:	Ch3Ex16
	Author:		S. Floyd
	Date:		6/10/2018

	== Senior Citizen Property Tax ==
	Madison County provides a $5,000 homeowner exemption for its senior citizens. For
	example, if a senior’s house is valued at $158,000 its assessed value would be $94,800,
	as explained above. However, he would only pay tax on $89,800. At last year’s tax
	rate of $2.64 for each $100 of assessed value, the property tax would be $2,370.72. In
	addition to the tax break, senior citizens are allowed to pay their property tax in four
	equal payments. The quarterly payment due on this property would be $592.68. Write
	a program that asks the user to input the actual value of a piece of property and the
	current tax rate for each $100 of assessed value. The program should then calculate
	and report how much annual property tax a senior homeowner will be charged for this
	property and what the quarterly tax bill will be. 
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
	double property;
	double taxRate;

	// Input
	cout << "Please enter the property value: ";
	cin >> property;
	cout << "Please enter the tax rate for each $100 of assessed value: ";
	cin >> taxRate;

	// Calculation
	double assessment = property * 0.6;
	double propertyTax = (assessment - 5000 / 100) * taxRate;
	double quarterlyPayment = propertyTax / 4;

	// Print results
	cout << endl << "Assessment value:\t$" << assessment;
	cout << endl << "Property tax:\t\t$" << propertyTax;
	cout << endl << "Quarterly payment:\t$" << quarterlyPayment << endl;

	// End	
	return 0;
}