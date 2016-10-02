#include <iostream>
using namespace std;


enum transactionType {
	lease, purchase

};

union payType {
	
	double leasePay;
	double purchasePay;

	

};


struct Car {
	int numberOfCar;
	char name[80];
	int model;
	transactionType type;
	payType rate;




};





void input(Car*, int);
void output(Car[], int);



int main() {

	const int MAX = 2;
	Car emp[MAX];
	input(emp, MAX);
	output(emp, MAX);
	return 0;




	return 0;
}



void input(Car* e, int num)

{
	char ch;
	for (int i = 0; i < num; i++)
	{
		
		cout << "Enter car's name: ";
		cin.ignore();
		cin.getline(e[i].name, 80);
		cout << " The number of model of the car:  " << endl;
		cin >> e[i].model;
		cout << "Are you going to buy the car or lease? (L/l or B/b) : ";
		cin >> ch;
		if (ch == 'L' || ch == 'l')
		{
			e[i].type = lease;
			cout << "Monthly rate: ";
			cin >> e[i].rate.leasePay;
		}
		else
		{
			e[i].type = purchase;
			cout << "Total purchase amount: ";
			cin >> e[i].rate.purchasePay;
		}
	}



}




void output(Car e[], int num)
{
	cout << "\nHere is the car infromation data: \n";
	cout << "                         " << endl;
	cout << "                         " << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "Name: " << e[i].name << endl;
		cout << "Model Number: " << e[i].model << endl;
		if (e[i].type == lease)
		{
			cout << "Monthly lease rate: $" << e[i].rate.leasePay << endl;
			cout << "Total pay for 5 years is : $" << e[i].rate.leasePay * 60 << endl;
		}
		else
		{
			cout << "Total purchase price: $" << e[i].rate.purchasePay << endl;
			cout << "Total monthly payment is: $" << e[i].rate.purchasePay / 60 << " for next 5 years." << endl;
		}

		cout << "                         " << endl;
		cout << "                         " << endl;
		cout << "                         " << endl;

	}
}


