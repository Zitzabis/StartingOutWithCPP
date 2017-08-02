/*
	== Documentation ==
	Project:	Ch3Ex4
	Author:		S. Floyd
	Date:		08/01/2017

	== Average Rainfall ==
	Write a program that calculates the average rainfall for three months. The program
	should ask the user to enter the name of each month, such as June or July, and the
	amount of rain (in inches) that fell each month. The program should display a message
	similar to the following:
	The average rainfall for June, July, and August is 6.72 inches. 
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
	string month1;
	string month2;
	string month3;
	double total = 0;
	double rainfall;

	// Month 1
	cout << "Enter month name: ";
	cin >> month1;
	cout << "Enter rainfall for " << month1 << ": ";
	cin >> rainfall;
	total += rainfall;
	cout << endl;

	// Month 2
	cout << "Enter month name: ";
	cin >> month2;
	cout << "Enter rainfall for " << month2 << ": ";
	cin >> rainfall;
	total += rainfall;
	cout << endl;

	// Month 3
	cout << "Enter month name: ";
	cin >> month3;
	cout << "Enter rainfall for " << month3 << ": ";
	cin >> rainfall;
	total += rainfall;
	cout << endl;

	// Print result
	cout << endl << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << total / 5 << " inches." << endl;

	// End	
	return 0;
}