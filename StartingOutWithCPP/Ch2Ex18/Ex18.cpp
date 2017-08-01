/*
	== Documentation ==
	Project:	Ch2Ex18
	Author:		S. Floyd
	Date:		08/01/2017

	== Energy Drink Consumption ==
	A soft drink company recently surveyed 16,500 of its customers and found that
	approximately 15 percent of those surveyed purchase one or more energy drinks per
	week. Of those customers who purchase energy drinks, approximately 58 percent of
	them prefer citrus-flavored energy drinks. Write a program that displays the following:
	- The approximate number of customers in the survey who purchase one or more energy drinks per week
	- The approximate number of customers in the survey who prefer citrus-flavored energy drinks 
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
	int numCustomers = 16500;
	double percentPurchasePerWeek = 0.15;
	double percentCitrus = 0.58;

	// Calculate
	int weeklyPurchasers = numCustomers * percentPurchasePerWeek;
	int citrusDrinkers = weeklyPurchasers * percentCitrus;

	// Print results
	cout << "Weekly Purchasers:	" << weeklyPurchasers << endl;
	cout << "Citrus Drinkers:	" << citrusDrinkers << endl;

	// End
	return 0;
}