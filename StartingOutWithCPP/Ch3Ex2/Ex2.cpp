/*
	== Documentation ==
	Project:	Ch3Ex2
	Author:		S. Floyd
	Date:		08/01/2017

	== Stadium Seating ==
	There are three seating categories at a stadium. For a softball game, Class A seats cost
	$15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how
	many tickets for each class of seats were sold, then displays the amount of income generated
	from ticket sales. Format your dollar amount in fixed-point notation, with two
	decimal places of precision, and be sure the decimal point is always displayed. 
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
	double classA = 15;
	double numClassA;
	double classB = 12;
	double numClassB;
	double classC = 9;
	double numClassC;

	// Set the number of decimal places
	cout.precision(2);

	// Print results
	cout << "How many tickets for sold for...\n";
	cout << "Class A: ";
	cin >> numClassA;
	cout << endl;
	cout << "Class B: ";
	cin >> numClassB;
	cout << endl;
	cout << "Class C: ";
	cin >> numClassC;
	cout << endl;
	cout << endl;
	cout << "Profit:\n";
	cout << "Class A:	$" << fixed << classA * numClassA << endl; // Fixed
	cout << "Class B:	$" << fixed << classB * numClassB << endl; // Fixed
	cout << "Class C:	$" << fixed << classC * numClassC << endl; // Fixed

	// End
	return 0;
}