//VoterEligibility_3B.cpp
/*
Adds input validation for citizen question in addition to that for age
Uses bool flag
*/
#include <iostream>
using namespace std;
int main()
{
	int age;
	char citizen;
	char felony;
	bool keepGoing = true; // flag
	cout << "Age: ";
	cin >> age;
	if (age < 0)
	{
		cout << "Invalid age\n";
		keepGoing = false; // no need for else since flag already true
	}
	if (keepGoing == true) // also works: if (keepGoing) *** See Note below
	{
		if (age < 18)
		{
			cout << "You are NOT eligible to vote" << endl;
			keepGoing = false;
		}
	}
	if (keepGoing == true)  //if (keepGoing)
	{
		cout << "Citizen: ";
		cin >> citizen;
		// alternative: if (citizen != 'y' && citizen != 'Y' && citizen != 'n' && citizen != 'N') 
		if (!(citizen == 'y' || citizen == 'Y' || citizen == 'n' || citizen == 'N'))
		{
			cout << "Invalid response\n";
			keepGoing = false;
		}
	}
	if (keepGoing == true)  //if (keepGoing)
	{
		if (citizen == 'n' || citizen == 'N')
		{
			cout << "You are NOT eligible to vote" ;
			keepGoing = false;
		}
	}
//else
	if (keepGoing == true)  //if (keepGoing)
	{
		cout << " Do you have felony? " << endl;
		cin >> felony;
		if (!(felony == 'y' || felony == 'Y' || felony == 'n' || felony == 'N'))
			cout << " Invalid response \n";
		else if (felony == 'y' || felony == 'Y')
			cout << " You are NOT eligible to vote" << endl;
		else
			cout << " You are eligible to vote" << endl;

	}


			//cout << "You are eligible to vote" << endl;

	return 0;
}
/*
As previous examples stated, make sure that if you type
if (keepGoing == true)  //tests whether keepGoing has the value true
you do not inadvertly type
if (keepGoing = true)   //assigns keepGoing the value true  -- LOGIC ERROR
In order to avoid the above logic error, you can simply type
if (keepGoing)
which is equivalent to
if (keepGoing == true)
*/