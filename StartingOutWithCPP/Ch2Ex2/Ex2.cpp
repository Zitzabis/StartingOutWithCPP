/*
== Documentation ==

Project:	Ch2Ex2
Author:		S. Floyd
Date:		07/31/2017

== Sales Prediction ==
The East Coast sales division of a company generates 58 percent of total sales. Based
on that percentage, write a program that will predict how much the East Coast division
will generate if the company has $8.6 million in sales this year.
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
	double totalSales = 8600000;
	double percentage = .58;

	// Calculate
	double eastCoastDiv = totalSales * percentage;

	// Print result
	cout << eastCoastDiv << endl;

	// End
	return 0;
}