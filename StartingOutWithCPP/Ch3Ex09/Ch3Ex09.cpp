/*
	== Documentation ==
	Project:	Ch3Ex9
	Author:		S. Floyd
	Date:		12/29/2017

	== How Many Calories? ==
	A bag of cookies holds 30 cookies. The calorie information on the bag claims
	that there are 10 “servings” in the bag and that a serving equals 300 calories.
	Write a program that asks the user to input how many cookies he or she actually
	ate and then reports how many total calories were consumed. 
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
	int cookiesEaten;
	int caloriesPerCookie = 100;

	// Input number of cookies
	cout << "Number of cookies eaten: ";
	cin >> cookiesEaten;

	// Print results
	cout << endl << "Total calories consumed: " << cookiesEaten * caloriesPerCookie << endl;

	// End	
	return 0;
}