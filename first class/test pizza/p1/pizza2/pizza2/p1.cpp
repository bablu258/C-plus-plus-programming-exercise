// Bablu Banik
// Pizza problem


#include <iostream>
using namespace std;


int main()

{
	int Numberofpizzas;
	double totalnumberoftopping = 0;

	double totalpricce = 0;

	char size, topping;
	int namofcolar;
	double const priceofsmall = 2.00, priceofmedium = 3.5, priceoflarge = 5.00, toppingprice = .50;
	double const dynamicprice = 1;
	bool keepgoing = true;





	cout << " Number of Pizza: ";
	cin >> Numberofpizzas;

	if (Numberofpizzas <= 0)
	{
		cout << " Invalid number of pizza.\n ";
		keepgoing = false;
	}

	if (Numberofpizzas > 4)
	{
		cout << " Call an ambulance. \n";
		keepgoing = false;
	}

	if (keepgoing == true)

	{
		cout << " Color: ";
		
		cin >> namofcolar;

		if (namofcolar > 0 && namofcolar <= 3)

		{


			if (namofcolar == 1)
				totalpricce += 0;
			else if (namofcolar == 2)
				totalpricce += 0;
			else
				totalpricce += dynamicprice;


		}


		else
		{
			cout << " Invalid entry! " << endl;

			keepgoing = false;
		}

	}
	if (keepgoing == true)


	{

		cout << " Size: ";
		cin >> size;



		switch (size)
		{

		case 's':
		case 'S':
			totalpricce += priceofsmall;

			break;

		case 'm':
		case'M':
			totalpricce += priceofmedium;

			break;

		case 'l':
		case 'L':
			totalpricce += priceoflarge;

			break;

		default:
		{
			cout << " Invaild resonse! /n";
			keepgoing = false;

		}

		}

	}

	if (keepgoing == true)
	{
		cout << " Anchovy: ";
		cin >> topping;

		if (topping != 'y' && topping != 'Y' && topping != 'n' && topping != 'N')
		{
			cout << " Invalid User input! ";
			keepgoing = false;
		}


		else if (topping == 'y' || topping == 'Y')

		{
			toppingprice;

			totalnumberoftopping = 0 + 1;
			keepgoing = true;

		}

		else
			keepgoing = true;

		if (keepgoing == true)

			cout << " Tuna: ";
		cin >> topping;

		if (topping != 'y' && topping != 'Y' && topping != 'n' && topping != 'N')
		{
			cout << " Invalid User input! ";
			keepgoing = false;
		}
		else if (topping == 'y' || topping == 'Y')
		{


			toppingprice;

			totalnumberoftopping = 0 + 1;
			keepgoing;
		}
		else


			keepgoing;
	}


	if (keepgoing == true)
	{
		cout << " Octopus: ";
		cin >> topping;

		if (topping != 'y' && topping != 'Y' && topping != 'n' && topping != 'N')
		{
			cout << " Invalid User input! ";
			keepgoing = false;
		}
		else if (topping == 'y' || topping == 'Y')
		{
			toppingprice;

			totalnumberoftopping = 0 + 1;
			keepgoing;
		}
		else

			keepgoing;


	}

	// total topping

	totalnumberoftopping ++;
	


	
	totalpricce = Numberofpizzas * (totalpricce + (totalnumberoftopping * toppingprice) );

	//Display

	if (keepgoing)


	{
		cout << " Total Numbero Of Topping: " << totalnumberoftopping << endl;
		cout << " Total Price: $ " << totalpricce << endl;

	}
	



	return 0;
}

