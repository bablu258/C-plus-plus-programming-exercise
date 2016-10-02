// mid term 2
// Bablu Banik
// completed parts: 1, 2, 3, 4, 5,6,7


#include <iostream>

using namespace std;

#include <string>

int main()

{
	char first_input;
	int hour_worked, amount_of_sales, amoutover;
	string status;
	double pay;
	const double hourlypayrate = 25.00, commision_rate = .05, high_commission = .1;
	bool keepgoing = true;

	cout << " H.Hourly\n C.Commission\n X.Exit \n";
	cout << " Enter your choice: " ;
	cin >> first_input;

	if (first_input != 'X' && first_input != 'x' && first_input != 'H' && first_input != 'h' && first_input != 'C' && first_input != 'c')

	{
		cout << " Invalid menu choice. ";
		keepgoing = false;
	}


	if (keepgoing == true)
	{



		if (first_input == 'X' || first_input == 'x')
		{
			cout << " Exiting " << endl;
			keepgoing = false;
		}

		if (keepgoing == true);
		{

			if (first_input == 'H' || first_input == 'h')
			{
				cout << " Hours worked: ";
				cin >> hour_worked;

				if (hour_worked <= 0)
				{
					cout << " Invalid amount " << endl;
					keepgoing = false;
				}


				
				if (keepgoing == true)
				{
					if (hour_worked > 40)

					{
						cout << " No overtime" << endl;
						keepgoing = false;

					}
				}
					

				if (keepgoing = true)

				{
					status = "Hourly";

					// pay calculation 
					pay = hour_worked * hourlypayrate;

					cout << " Pay: " << pay << endl;
					cout << " Status: " << status << endl;
				}

			}


			if (first_input == 'C' || first_input == 'c')

			{
				cout << " Sales: ";
				cin >> amount_of_sales;

				if (amount_of_sales <= 0)
				{
					cout << " Invalid amount " << endl;

					keepgoing = false;

				}

				if (keepgoing == true)
				{
					if (amount_of_sales < 1000)
					{
						cout << " Employee Fired" << endl;
						keepgoing = false;

					}


					
				}



				if (keepgoing == true)


				{
					status = " Commision";


					if (amount_of_sales < 5000)

					{
						// pay calculation
						pay = amount_of_sales * commision_rate;


						cout << " Pay: " << pay << endl;
						cout << " Status: " << status << endl;
					}


					if (amount_of_sales > 5000)
					{
						amoutover = amount_of_sales - 5000;
						pay = (5000 * commision_rate) + (amoutover * high_commission);
						cout << " Pay: " << pay << endl;
						cout << " Status: " << status << endl;



					}

				}

				}

			}


		}

	


	//if (keepgoing)
		//cout << status;












	return 0;
}