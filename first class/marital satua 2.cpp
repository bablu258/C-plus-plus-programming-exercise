//Bablu Banik

//CSIT 802

//Solution to Module : Marital Status-- switch
#include <iostream>
using namespace std;

int main()
{
	char status;
	cout << "Input marital status: ";
	cin >> status;

	switch (status)

	{
	case 'S':
	case 's':
		cout << "Marital status: Single\n";
		cout << "Your marital status has been validated.\n";
		break;
		

	case 'M':
	case'm':
		cout << "Marital status: Married\n";
		cout << "Your marital status has been validated.\n";
		break;

	case 'D':
	case'd':
		cout << "Marital status: Divorced\n";
		cout << "Your marital status has been validated.\n";
		break;


	case 'W':
	case'w':
		cout << "Marital status: Widowed\n";
		cout << "Your marital status has been validated.\n";
		break;

	default: cout << "Invalid input\n";

	}


	return 0;
}