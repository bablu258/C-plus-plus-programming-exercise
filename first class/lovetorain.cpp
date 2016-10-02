// Bablu Banik
//train distance project


#include <iostream>
using namespace std;


int main()

{
	int speed, totalhour, distancetravled;
	int hour = 1; // initialization

	cout << " What is the speed of the vehicle in mph? ";
	cin >> speed;

	while (speed < 0)
	{


		cout << " The speed cannot be a negative value " << endl;
		cout << " Re-enter the speed ";
		cin >> speed;
	}

	cout << " How many hours has it traveled? ";
	cin >> totalhour;

	while (totalhour <= 0)

	{
		cout << " Time traveled must be at least one  " << endl;
		cout << " Re-enter the hour ";
		cin >> totalhour;

	}

	cout << " Hour                  distance traveled " << endl;
	cout << " --------------------------------------- " << endl;



	/*

	for (; hour <= totalhour; hour++)

	{

	// calculation
	distancetravled = speed * hour;

	// display

	cout << "  " << hour << "             " << "         " << distancetravled << endl;

	}
	*/

	while (hour <= totalhour) // condition

	{

		// calculation
		distancetravled = speed * hour;

		// display

		cout << "  " << hour << "             " << "         " << distancetravled << endl;

		// update

		hour++;


	}


	return 0;
}