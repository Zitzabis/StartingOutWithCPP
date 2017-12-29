/*
	== Documentation ==
	Project:	Ch3Ex14
	Author:		S. Floyd
	Date:		12/29/2017

	== Monthly Sales Tax ==
	A retail company must file a monthly sales tax report listing the sales for the month
	and the amount of sales tax collected. Write a program that asks for the month, the year,
	and the total amount collected at the cash register (that is, sales plus sales tax).
	Assume the state sales tax is 4 percent and the county sales tax is 2 percent.

	If the total amount collected is known and the total sales tax is 6 percent,
	the amount of product sales may be calculated as: 
	S = T/1.06
	S is the product sales and T is the total income (product sales plus sales tax).

	The program should display a report similar to:

	Month: October 
	-------------------- 
	Total Collected:     $ 26572.89 
	Sales:				 $ 25068.76 
	County Sales Tax:    $   501.38 
	State Sales Tax:     $  1002.75 
*/

// Include
#include <iostream>
#include <iomanip>
#include <string>

/*
	It is poor practice to use the "standard" namespace.
	However it is included so as to adhere to what the book does.
*/
using namespace std;

// Main
int main() {
	// Vars
	string dateInput;
	string date;
	int monthlyTotal;

	// Input
	cout << "Please enter the month: ";
	cin >> dateInput;
	date += dateInput + " ";
	cout << "Please enter the year: ";
	cin >> dateInput;
	date += dateInput;
	cout << "Please enter the monthly total of money recieved at register: $";
	cin >> monthlyTotal;

	// Print results
	cout << endl << date << endl;
	cout << "--------------------" << endl;
	cout << setprecision(2) << fixed;
	cout << endl << "Total Collected:\t$" << monthlyTotal;
	cout << endl << "Sales:\t\t\t$" << monthlyTotal / 1.06;
	cout << endl << "County Sales Tax:\t$" << monthlyTotal * 0.02;
	cout << endl << "State Sales Tax:\t$" << monthlyTotal * 0.04 << endl;

	// End	
	return 0;
}