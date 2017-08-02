/*
	== Documentation ==
	Project:	Ch3Ex3
	Author:		S. Floyd
	Date:		08/01/2017

	== Test Average ==
	Write a program that asks for five test scores. The program should calculate the average
	test score and display it. The number displayed should be formatted in fixed-point
	notation, with one decimal point of precision.
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
	double total = 0;
	int score;

	for (int i = 0; i < 5; i++) {
		cout << "Enter score " << i + 1 << ": ";
		cin >> score;
		total += score;
	}

	// Set the number of decimal places
	cout.precision(1);

	cout << endl << "Average Score:	" << fixed << total / 5 << endl;

	// End	
	return 0;
}