/*
	== Documentation ==
	Project:	Ch2Ex5
	Author:		S. Floyd
	Date:		08/01/2017

	== Average of Values ==
	To get the average of a series of values, you add the values up and then divide the sum
	by the number of values. Write a program that stores the following values in five different
	variables: 28, 32, 37, 24, and 33. The program should first calculate the sum
	of these five variables and store the result in a separate variable named sum. Then, the
	program should divide the sum variable by 5 to get the average. Display the average
	on the screen. 
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
	int num1 = 28;
	int num2 = 32;
	int num3 = 37;
	int num4 = 24;
	int num5 = 33;

	// Sum
	int sum = num1 + num2 + num3 + num4 + num5;
	// Average
	double average = sum / 5;

	// Print result
	cout << "Average: " << average << endl;

	// End
	return 0;
}