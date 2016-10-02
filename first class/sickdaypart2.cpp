//sickDays.cpp
// Bablu Banik






#include <iostream>
using namespace std;
#include <string>
int main()
{
	//Declare constants and variables
	const int NUM_EMPS = 4;
	string emp1, emp2, emp3, emp4;
	int numDays1, numDays2, numDays3, numDays4;
	int totalDays;
	double averageDays;

	//Get inputs
	cout << "Enter name of employee #1: ";
	getline(cin, emp1);
	//cin.ignore();
	//cin >> emp1;
	cout << "Enter sick days for employee #1: ";
	cin >> numDays1;
	cin.ignore();
	//cout << "Enter name of employee #1: ";
	//getline(cin, emp1);

	cout << "Enter name of employee #2: ";
	getline(cin, emp2);
	//cin.ignore();
	//cin >> emp2;
	cout << "Enter sick days for employee #2: ";
	cin >> numDays2;
	cin.ignore();
	//cout << "Enter name of employee #2: ";
	//getline(cin, emp2);

	cout << "Enter name of employee #3: ";
	getline(cin, emp3);
	//cin.ignore();
	//cin >> emp3;
	cout << "Enter sick days for employee #3: ";
	cin >> numDays3;
	cin.ignore();
	//cout << "Enter name of employee #3: ";
	//getline(cin, emp3);

	cout << "Enter name of employee #4: ";
	getline(cin, emp4);
	//cin.ignore();
	//cin >> emp4;
	cout << "Enter sick days for employee #4: ";
	cin >> numDays4;
	cin.ignore();
	//cout << "Enter name of employee #4: ";
	//getline(cin, emp4);

	//Do assignment calculations
	totalDays = numDays1 + numDays2 + numDays3 + numDays4;
	averageDays = (double)totalDays / NUM_EMPS;

	//Display results (report)
	cout << "\nGenghis' Evil Insurance COmpany, Val E Glen Branch\n";
	cout << "=========================================\n";
	cout << "Employee:  " << emp1 << endl;
	cout << "Sick Days: " << numDays1 << endl << endl;
	cout << "Employee:  " << emp2 << endl;
	cout << "Sick Days: " << numDays2 << endl << endl;
	cout << "Employee:  " << emp3 << endl;
	cout << "Sick Days: " << numDays3 << endl << endl;
	cout << "Employee:  " << emp4 << endl;
	cout << "Sick Days: " << numDays4 << endl << endl;
	cout << "The total number of sick days is " << totalDays << endl;
	cout << "The average number of sick days is " << averageDays << endl;

	return 0;
}