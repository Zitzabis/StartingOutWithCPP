/*
	== Documentation ==
	Project:	Ch2Ex6
	Author:		S. Floyd
	Date:		08/01/2017

	== Average of Values ==
	Suppose an employee gets paid every two weeks and earns $2,200 each pay period.
	In a year the employee gets paid 26 times. Write a program that defines the following variables:

	payAmount		This variable will hold the amount of pay the employee earns each pay period. Initialize the variable with 2200.0.

	payPeriods		This variable will hold the number of pay periods in a year. Initialize the variable with 26.

	annualPay		This variable will hold the employee’s total annual pay, which will be calculated.

	The program should calculate the employee’s total annual pay by multiplying the
	employee’s pay amount by the number of pay periods in a year and store the result in
	the annualPay variable. Display the total annual pay on the screen.
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
	double payAmount = 2200.0;
	double payPeriods = 26;
	double annualPay;

	// Calculate
	annualPay = payAmount * payPeriods;

	// Print result
	cout << "Annual Pay: " << annualPay << endl;

	// End
	return 0;
}