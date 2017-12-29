/*
	== Documentation ==
	Project:	Ch3Ex6
	Author:		S. Floyd
	Date:		08/03/2017

	== Ingredient Adjuster ==
	A cookie recipe calls for the following ingredients:
	- 1.5 cups of sugar
	- 1 cup of butter
	- 2.75 cups of flour
	The recipe produces 48 cookies with this amount of the ingredients. Write a program
	that asks the user how many cookies he or she wants to make, and then displays the
	number of cups of each ingredient needed for the specified number of cookies. 
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
	int cookies;
	int originalCookies = 48;
	double sugar = 1.5; // cups
	double butter = 1; // cup
	double flour = 2.75; // cups

	// Input number of cookies
	cout << "How many cookies would you like to make?\nInput: ";
	cin >> cookies;

	// Calculate
	sugar = (sugar / originalCookies) * cookies;
	butter = (butter / originalCookies) * cookies;
	flour = (flour / originalCookies) * cookies;

	// Print results
	cout << "Please use:\n";
	cout << sugar << " cups of sugar\n";
	cout << butter << " cups of butter\n";
	cout << flour << " cups of flour\n";

	// End	
	return 0;
}