// Bablu Banik
// higest and lowest score


#include <iostream>
using namespace std;
int main()
{
	int score;
	int numTests;
	int total = 0;
	double average;
	bool keepgoing = true;

	cout << "How many tests: ";
	cin >> numTests;





	//while loop solution:

	int s = 1;  //initialization of counter
	int higestvaulesofar = 0;
	int lowestvaluesofar = 100;
	while (s <= numTests)  //test that counter has not reached limit
	{

		cout << "Enter score # " << s << ": ";
		cin >> score;

		if (score == -99)
			keepgoing = false;

		if ( score != -99 && keepgoing == true)
		{
			total += score;
			s++;    //update the counter

			if (higestvaulesofar <= score)
				higestvaulesofar = score;

			if (lowestvaluesofar >= score)
				lowestvaluesofar = score;
		}

	}


	average = (double)total / numTests;
	cout << "\nTotal: " << total << endl;
	cout << "Average: " << average << endl;
	cout << "Higest Score: " << higestvaulesofar << endl;
	cout << "Lowest Score: " << lowestvaluesofar << endl;
	return 0;
}