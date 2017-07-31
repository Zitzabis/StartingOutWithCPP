/*
	== Documentation ==
	Project:	Ch2Ex1
	Author:		S. Floyd
	Date:		07/31/2017

	== Restaurant Bill ==
	Write a program that computes the tax and tip on a restaurant bill for a patron with
	a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
	be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
	amount, and total bill on the screen. 
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
	double tax = 0.0675;
	double tip = 0.2;
	double meal = 88.67;

	// Calculate
	double taxAmount = meal * tax;
	double tipAmount = (meal + taxAmount) * tip;
	double totalBill = meal + taxAmount + tipAmount;

	// Print details
	cout << "Meal Cost:		$" << meal << endl;
	cout << "Tax Amount:		$" << taxAmount << endl;
	cout << "Tip Amount:		$" << tipAmount << endl;
	cout << "Total Bill:		$" << totalBill << endl;

	// End
	return 0;
}