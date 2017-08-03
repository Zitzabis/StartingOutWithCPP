/*
	== Documentation ==
	Project:	Ch3Ex7
	Author:		S. Floyd
	Date:		08/03/2017

	== Box Office ==
	A movie theater only keeps a percentage of the revenue earned from ticket sales. The
	remainder goes to the movie distributor. Write a program that calculates a theater’s
	gross and net box office profit for a night. The program should ask for the name of the
	movie, and how many adult and child tickets were sold. (The price of an adult ticket is
	$10.00 and a child’s ticket is $6.00.) It should display a report similar to:

	Movie Name: “Wheels of Fury”
	Adult Tickets Sold: 382
	Child Tickets Sold: 127
	Gross Box Office Profit: $ 4582.00
	Net Box Office Profit: $ 916.40
	Amount Paid to Distributor: $ 3665.60

	Assume the theater keeps 20 percent of the gross box office profit.
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
	string name;
	int adultTickets;
	int childTickets;
	double theaterPercentage = 0.2;

	// Input name
	cout << "Name of the movie: ";
	cin >> name;
	// Input adult ticket number
	cout << "Number of adult tickets sold: ";
	cin >> adultTickets;
	// Input child ticket number
	cout << "Number of child tickets sold: ";
	cin >> childTickets;

	// Print results
	cout << endl << "Movie Name:			\"" << name << "\"\n";
	cout << "Adult Tickets Sold:		" << adultTickets << endl;
	cout << "Child Tickets Sold:		" << childTickets << endl;
	cout << "Gross Box Office Profit:	$" << (adultTickets * 10) + (childTickets * 6) << endl;
	cout << "Net Box Office Profit:		$" << ((adultTickets * 10) + (childTickets * 6)) * theaterPercentage << endl;
	cout << "Amount Paid to Distributor:	$" << ((adultTickets * 10) + (childTickets * 6)) - (((adultTickets * 10) + (childTickets * 6)) * theaterPercentage) << endl;

	// End	
	return 0;
}