
//Bablu Banik

//CSIT 802

//Solution to Module : Marital Status-- switch



//maritialStatus-if.cpp
 #include <iostream>
using namespace std;

int main()
{
	char status;
	cout << "Input marital status( as s, m, d or w): ";
	cin >> status;
	if (status == 'S' || status == 's')
	{
		cout << "Marital status: Single\n";
		cout << "Your marital status has been validated.\n";
	}
	else if (status == 'M' || status == 'm')
	{
		cout << "Marital status: Married\n";
		cout << "Your marital status has been validated.\n";
	}
	else if (status == 'D' || status == 'd')
	{
		cout << "Marital status: Divorced\n";
		cout << "Your marital status has been validated.\n";
	}
	else if (status == 'W' || status == 'w')
	{
		cout << "Marital status: Widowed\n";
		cout << "Your marital status has been validated.\n";
	}
	else
		cout << "Invalid input\n";

	// ALTERNATIVE SOLUTION:
	//  if (status != 'S' || status != 's' || status != 'M' || status != 'm' || status != 'D' || status != 'd' && status != 'W' || status != 'w')  //LOGIC ERROR!!
	//  if (status != 'S' || 's' || 'M' || 'm' || 'D' || 'd' || 'W' || 'w')  //LOGIC ERROR!!
/*	if (status != 'S' && status != 's' && status != 'M' && status != 'm' && status != 'D' && status != 'd' && status != 'W' && status != 'w')   //correct
		//OR
		//  if ( ! (status == 'S' || status == 's' || status == 'M' || status == 'm' || status == 'D' || status == 'd' || status == 'W' || status == 'w')  )   //also correct
		cout << "Invalid Input\n";
	else
	{
		if (status == 'S' || status == 's')
		{
			cout << "Marital status: Single\n";
			cout << "Your marital status has been validated.\n";
		}
		else if (status == 'M' || status == 'm')
		{
			cout << "Marital status: Married\n";
			cout << "Your marital status has been validated.\n";
		}
		else if (status == 'D' || status == 'd')
		{
			cout << "Marital status: Divorced\n";
			cout << "Your marital status has been validated.\n";
		}
		else if (status == 'W' || status == 'w')
		{
			cout << "Marital status: Widowed\n";
			cout << "Your marital status has been validated.\n";
		}
	}
	*/
	return 0;
}