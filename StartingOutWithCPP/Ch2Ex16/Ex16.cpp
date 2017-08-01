/*
	== Documentation ==
	Project:	Ch2Ex16
	Author:		S. Floyd
	Date:		08/01/2017

	== Diamond Pattern ==
	Write a program that displays the following pattern:
	   *
	  ***
	 *****
	*******
	 *****
	  ***
	   *
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
	// Print result
	cout << "   *\n" << "  ***\n" << " *****\n" << "*******\n" << " *****\n" << "  ***\n" << "   *\n" << endl;

	// End
	return 0;
}