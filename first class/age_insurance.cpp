//Bablu Banik
// Home work: age and insurance


#include <iostream>
using namespace std;
int main()
{

	const int minor_child = 12,
		minor_teen = 17,
		adult = 64,
		senior_adult = 65,
		insurance_last_age = 90;

	int age;



	cout << " How old are you? " << endl;
	cin >> age;

	if (age <= minor_child)
	{
		cout << " You are a minor child. " << endl;
		cout << " Sorry you are not eligible for the life insurance. " << endl;
	}

	else if (age <= minor_teen)

	{
		cout << " You are a minor teenager. " << endl;
		cout << " Sorry you are not eligible for the life insurance. " << endl;
	}


	else if (age <= adult)

	{
		cout << " You are an adult. " << endl;
		cout << " You are eligible for our special life insurance package!" << endl;
	}



	else if (age >= senior_adult)
	{


		if (age <= insurance_last_age)
		{
			cout << " You are a senior adult. " << endl;
			cout << " You are eligible for our special life insurance package!" << endl;
		}
		else
		{
			cout << " You are a senior adult. " << endl;
			cout << " Sorry you are not eligible for the life insurance. " << endl;
		}



	}











	return 0;
}