/*
	== Documentation ==
	Project:	Ch3Ex5
	Author:		S. Floyd
	Date:		08/03/2017

	== Male and Female Percentages ==
	Write a program that asks the user for the number of males and the number of females
	registered in a class. The program should display the percentage of males and females
	in the class.
	Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the
	class. The percentage of males can be calculated as 8 ÷ 20 = 0.4, or 40%. The percentage
	of females can be calculated as 12 ÷ 20 = 0.6, or 60%.
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
	int males;
	int females;
	double total;

	// Males
	cout << "How many males are in the class?\nInput: ";
	cin >> males;
	// Females
	cout << "How many females are in the class?\nInput: ";
	cin >> females;

	// Calculate
	total = males + females;

	// Print results
	cout << "\nMales:	" << (males / total) * 100 << "%" << endl;
	cout << "Females:	" << (females / total) * 100 << "%" << endl;

	// End	
	return 0;
}