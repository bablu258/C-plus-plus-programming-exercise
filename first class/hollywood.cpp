//Bablu Banik
// Home work: largest number


#include <iostream>
using namespace std;
int main()

{

	int first, second, third;

	cout << " Enter 3 different intergers" << endl;
	cin >> first >> second >> third;

	if (first > second)

	{
		if (second > third)
			cout << " The largest number is: " << first << endl;
		else // second <third
		{
			if (third > first)
				cout << " The largest number is: " << third << endl;
			else // third < first
				cout << " The largest number is: " << first << endl;
		}

	}

	else if (first < second)
	{
		if (first > third)
			cout << " The largest number is: " << second << endl;
		else // first < third
		{
			if (third < second)
				cout << " The largest number is: " << second << endl;
			else // third > second
				cout << " The largest number is: " << third << endl;

		}

	}






	return 0;
}


