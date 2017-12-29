/*
	== Documentation ==
	Project:	Ch3Ex13
	Author:		S. Floyd
	Date:		12/29/2017

	== Currency ==
	Write a program that will convert U.S. dollar amounts to Japanese yen and to euros,
	storing the conversion factors in the constants  YEN_PER_DOLLAR  and  EUROS_PER_ DOLLAR.
	To get the most up-to-date exchange rates, search the Internet using the term “currency exchange rate”.
	If you cannot find the most recent exchange rates, use the following: 
	1 Dollar = 98.93 Yen
	1 Dollar = 0.74 Euros

	Format your currency amounts in fixed-point notation, with two decimal places of precision,
	and be sure the decimal point is always displayed. 
*/

// Include
#include <iostream>
#include <iomanip>

/*
	It is poor practice to use the "standard" namespace.
	However it is included so as to adhere to what the book does.
*/
using namespace std;

// Main
int main() {
	// Vars
	const double YEN_PER_DOLLAR = 98.93;
	const double EUROS_PER_DOLLAR = 0.74;
	double usd;

	// Input expenses
	cout << "Please enter U.S. dollar amount: $";
	cin >> usd;

	// Print results
	cout << setprecision(2) << fixed;
	cout << endl << "Yen: " << usd * YEN_PER_DOLLAR;
	cout << endl << "Euros: " << usd * EUROS_PER_DOLLAR << endl;

	// End	
	return 0;
}