/*
	== Documentation ==

	Project:	Ch2Ex1
	Author:		S. Floyd
	Date:		07/31/2017

	== Sum of Two Numbers ==
	Write a program that stores the integers 50 and 100 in variables, and stores the sum of
	these two in a variable named total.
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
	int a = 50;
	int b = 100;

	// Calculate total
	int total = a + b;

	// End
	return 0;
}