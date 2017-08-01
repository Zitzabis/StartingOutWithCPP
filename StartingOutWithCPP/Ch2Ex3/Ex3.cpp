/*
	== Documentation ==

	Project:	Ch2Ex3
	Author:		S. Floyd
	Date:		07/31/2017

	== Sales Prediction ==
	Write a program that will compute the total sales tax on a $95 purchase. Assume the
	state sales tax is 4 percent and the county sales tax is 2 percent.
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
	double stateTax = 0.4;
	double countyTax = 0.2;
	int purchaseCost = 95;

	double totalSalesTax = purchaseCost * (stateTax + countyTax);

	cout << totalSalesTax << endl;;

	// End
	return 0;
}