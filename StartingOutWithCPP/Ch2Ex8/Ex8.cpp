/*
	== Documentation ==
	Project:	Ch2Ex8
	Author:		S. Floyd
	Date:		08/01/2017

	== Total Purchase ==
	A customer in a store is purchasing five items. The prices of the five items are:

	Price of item 1 = $15.95
	Price of item 2 = $24.95
	Price of item 3 = $6.95
	Price of item 4 = $12.95
	Price of item 5 = $3.95

	Write a program that holds the prices of the five items in five variables. Display each
	item’s price, the subtotal of the sale, the amount of sales tax, and the total. Assume the
	sales tax is 7%.
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
	double item1 = 15.95;
	double item2 = 24.95;
	double item3 = 6.95;
	double item4 = 12.95;
	double item5 = 3.95;
	double salesTax = 0.07;

	double subtotal = item1 + item2 + item3 + item4 + item5;
	double total = subtotal + (subtotal * salesTax);

	cout << "Item 1			" << item1 << endl;
	cout << "Item 2			" << item2 << endl;
	cout << "Item 3			" << item3 << endl;
	cout << "Item 4			" << item4 << endl;
	cout << "Item 5			" << item5 << endl;
	cout << "---------------" << endl;
	cout << "Subtotal		" << subtotal << endl;
	cout << "Sales Tax		" << subtotal * salesTax << endl;
	cout << "---------------" << endl;
	cout << "Total			" << total << endl;

	// End
	return 0;
}