// calculator

// Bablu Banik



#include <iostream>
using namespace std;

int main()
{
	double op1, op2;
	char choice;
	

	do {


		cout << "+) Add\n";
		cout << "-) Subtract\n";
		cout << "*) Multiply\n";
		cout << "/) Divide\n";
		cout << "x) Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == 'x' || choice == 'X')
			cout << "Exiting...\n";
			
			
		else if (choice != '+' && choice != '-' && choice != '*' && choice != '/')
			cout << "Invalid input\n";
		else
		{
			cout << "Enter the two operands: ";
			cin >> op1 >> op2;




			switch (choice)
			{
			case '+':
				cout << op1 << " + " << op2
					<< " is " << op1 + op2 << endl;
				break;
			case '-':
				cout << op1 << " - " << op2
					<< " is " << op1 - op2 << endl;
				break;
			case '*':
				cout << op1 << " * " << op2
					<< " is " << op1 * op2 << endl;
				break;
			case '/':
				if (op2 != 0)
					cout << op1 << " / " << op2
					<< " is " << op1 / op2 << endl;
				else
					cout << "Division by zero is not possible\n";
			}






		}




	} while (!(choice == 'x' || choice == 'X'));
	
	
	



	return 0;
}
