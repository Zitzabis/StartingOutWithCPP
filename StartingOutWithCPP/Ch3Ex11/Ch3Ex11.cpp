/*
	== Documentation ==
	Project:	Ch3Ex11
	Author:		S. Floyd
	Date:		12/29/2017

	== Automobile Costs ==
	Write a program that asks the user to enter the monthly costs for
	the following expenses incurred from operating his or her automobile:
	loan payment, insurance, gas, oil, tires, and maintenance. The program
	should then display the total monthly cost of these expenses, and the total
	annual cost of these expenses.
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
	double input;
	double total = 0;

	// Input expenses
	cout << "Please enter the monthly cost for the following expenses on a vehicle." << endl;
	cout << "Loan Payment:	$";
	cin >> input;
	total += input;
	cout << "Insurance:	$";
	cin >> input;
	total += input;
	cout << "Gas:		$";
	cin >> input;
	total += input;
	cout << "Oil:		$";
	cin >> input;
	total += input;
	cout << "Tires:		$";
	cin >> input;
	total += input;
	cout << "Maintenance:	$";
	cin >> input;
	total += input;

	// Print results
	cout << endl << "Total Monthly Cost: $" << total << endl;
	cout << "Total Annual Cost: $" << total * 12 << endl;

	// End	
	return 0;
}