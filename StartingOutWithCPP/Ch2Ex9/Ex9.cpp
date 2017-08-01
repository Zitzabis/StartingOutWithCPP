/*
	== Documentation ==
	Project:	Ch2Ex9
	Author:		S. Floyd
	Date:		08/01/2017

	== Cyborg Data Type Sizes ==
	You have been given a job as a programmer on a Cyborg supercomputer. In order to
	accomplish some calculations, you need to know how many bytes the following data
	types use:

	char, int, float, and double

	You do not have any manuals, so you can’t
	look this information up. Write a C++ program that will determine the amount of
	memory used by these types and display the information on the screen. 
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
	cout << "Size of CHAR:		" << sizeof(char) << " bytes" << endl;
	cout << "Size of INT:		" << sizeof(int) << " bytes" << endl;
	cout << "Size of FLOAT:		" << sizeof(float) << " bytes" << endl;
	cout << "Size of DOUBLE:		" << sizeof(double) << " bytes" << endl;

	// End
	return 0;
}