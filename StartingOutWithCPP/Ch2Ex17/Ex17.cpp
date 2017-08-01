/*
	== Documentation ==
	Project:	Ch2Ex17
	Author:		S. Floyd
	Date:		08/01/2017

	== Stock Commission ==
	Kathryn bought 750 shares of stock at a price of $35.00 per share. She must pay her
	stockbroker a 2 percent commission for the transaction. Write a program that calculates
	and displays the following:
	- The amount paid for the stock alone (without the commission)
	- The amount of the commission
	- The total amount paid (for the stock plus the commission)
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
	int numShares = 750;
	int pricePerShare = 35; // in dollars
	double commissionPercent = 0.02;

	// Calculate
	double amountPaidStock = pricePerShare * numShares;
	double commissionAmount = amountPaidStock * commissionPercent;
	double totalAmount = amountPaidStock + commissionAmount;

	// Print results
	cout << "Amount paid for the stock alone:	$" << amountPaidStock << endl;
	cout << "Commission amount:			$" << commissionAmount << endl;
	cout << "Total amount paid:			$" << totalAmount << endl;

	// End
	return 0;
}