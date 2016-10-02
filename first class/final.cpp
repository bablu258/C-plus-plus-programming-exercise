// calculator

// Bablu Banik

#include <iostream>
using namespace std;

int main()
{
	double op1, op2;
	char choice, zeor_option;
	bool keepgoing = true;
	int addition = 0;
	int subtraction = 0;
	int multification = 0;
	int division = 0;
	int totalinput;
	int totaladdition, totalsubtration, totalmultificayion, totaldivision, individualcalculation;
	int grandtotal, average, highsofar, lowsofar, numforhighlow = 0;

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
				individualcalculation = op1 + op2;
				cout << op1 << " + " << op2
					<< " is " << individualcalculation << endl;
				totaladdition = individualcalculation;
				addition++; // counting each amount for each individal calculation
				numforhighlow++;
				totaladdition++; // adding 

				break;
			case '-':
				individualcalculation = op1 - op2;
				cout << op1 << " - " << op2
					<< " is " << individualcalculation << endl;
				totalsubtration = individualcalculation;
				subtraction++;
				numforhighlow++;
				totalsubtration++;

				break;
			case '*':
				individualcalculation = op1 * op2;
				cout << op1 << " * " << op2
					<< " is " << individualcalculation << endl;
				totalmultificayion = individualcalculation;
				multification++;
				numforhighlow++;
				totalmultificayion++;

				break;
			case '/':
				individualcalculation = op1 / op2;
				if (op2 != 0)
				{
					cout << op1 << " / " << op2
						<< " is " << individualcalculation << endl;
					totaldivision = individualcalculation;
					division++;
					numforhighlow++;
					totaldivision++;
				}
				else
				{
					cout << "Division by zero is not possible\n";

					cout << "Do you want to quit: " << endl;
					cin >> zeor_option;

					if (zeor_option == 'y' || zeor_option == 'Y')

						keepgoing = false;

				}



			}
			if (numforhighlow == 1)
				highsofar = lowsofar = individualcalculation;
			else if (numforhighlow > 1)
			{
				if (individualcalculation > highsofar)
					highsofar = individualcalculation;
				else if (individualcalculation < lowsofar)
					lowsofar = individualcalculation;


			}

			



		}




	} while (choice != 'x' && choice != 'X' && keepgoing);
	//while (!(choice == 'x' && choice == 'X' && keepgoing)); this does not work; but i don't know why?

	//display
	cout << " Program is terminating." << endl;
	cout << " Number of Additions: " << addition << endl;
	cout << " Number of Subtractions: " << subtraction << endl;
	cout << " Number of Multiplications: " << multification << endl;
	cout << " Number of Divisions: " << division << endl;

	totalinput = addition + subtraction + multification + division;
	grandtotal = totaladdition + totalsubtration + totalmultificayion + totaldivision;
	average = grandtotal / totalinput;

	if (totalinput > 1)
	{
		cout << " Average arithmetic result: " << average << endl;
		cout << " Highest arithmetic result: " << highsofar << endl;
		cout << " Lowest arithmetic result: " << lowsofar << endl;

	}



	return 0;
}
