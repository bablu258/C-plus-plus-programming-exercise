#include <iostream>
using namespace std;

int main()
{
	const double ADULT_RATE = 120.00;
	const double CHILD_RATE = 60.00;
	const double SENIOR_RATE = 100.00;
	int choice, months;
	double charges;
	cout << "\t\tHealth Club Membership Menu\n\n";
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "3. Senior Citizen Membership\n";
	cout << "4. Quit the Program\n\n";
	cout << "Enter your choice: ";
	cin >> choice;
	cout << " Enter number of months: ";
	cin >> months;


	if (choice <= 3 && months <= 0)
		cout << " Invalid number of months" << endl;
	else 
	{
		if (choice <= 3 && months >= 1)
		{
			if (choice == 1)
			{
				charges = months * ADULT_RATE;
				cout << " The total charges are $" << charges;

			}
			else if (choice == 2)

			{
				charges = months * CHILD_RATE;
				cout << " The total charges are $" << charges;

			}
			 
			else if (choice == 3)

			{
				charges = months * SENIOR_RATE;
				cout << " The total charges are $" << charges;


			}

			else



		}







	}
	

	return 0;
}