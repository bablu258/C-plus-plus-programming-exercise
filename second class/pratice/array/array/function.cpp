#include <iostream>
using namespace std;
#include <string>
#include <iomanip>
void display();
int monthsdetail(int num);



int main(){
	int number;
	display();
	cin >> number;
	do {
		display();

	} while (number < 1 || number >= 5);

	monthsdetail(number);
	
	
	return 0;
}



void display()
{
	
		cout << " The table for types insurance";
		cout << " \nwe provide is given below: " << endl;
		cout << " 1. Adult\n 2. Senior\n 3. child" << endl;
		cout << " type 1 for adult or 2 for\n senior or 3 for child or\n 4 for quit from the program" << endl;

}

int monthsdetail(int num)

{
	int coverage;
	
		

	if (num != 4)
	{
		cout << " Type the number of months you want coverage?";
		cin >> coverage;
		return coverage;

	}

	if (num==4)
	return (0);





}