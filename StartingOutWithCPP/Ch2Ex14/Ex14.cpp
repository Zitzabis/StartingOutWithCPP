/*
	== Documentation ==
	Project:	Ch2Ex14
	Author:		S. Floyd
	Date:		08/01/2017

	== Personal Information ==
	Write a program that displays the following pieces of information, each on a separate line:

	Your name
	Your address, with city, state, and ZIP code
	Your telephone number
	Your college major

	Use only a single cout statement to display all of this information.
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
	// Print results
	cout << "John Doe\n123 Park St.\nNew York, NY, 1234\n123 456 7890\nComputer Science Major\n";

	// End
	return 0;
}