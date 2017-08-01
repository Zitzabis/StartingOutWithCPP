/*
	== Documentation ==
	Project:	Ch2Ex12
	Author:		S. Floyd
	Date:		08/01/2017

	== Land Calculation ==
	One acre of land is equivalent to 43,560 square feet. Write a program that calculates
	the number of acres in a tract of land with 391,876 square feet.
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
	int acreInFeet = 43560;
	int tractOfLand = 391876;

	int totalAcres = tractOfLand / acreInFeet;

	cout << "Total acres in " << tractOfLand << " ft^2 of land:	" << totalAcres << " acres" << endl;

	// End
	return 0;
}