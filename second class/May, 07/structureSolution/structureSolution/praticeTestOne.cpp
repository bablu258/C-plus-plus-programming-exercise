#include <iostream>
using namespace std;

struct Car {
	char name [80];
	int model;

	Car()

	{

		strcpy(name, "Unknown");
		model = 0 ;

	}

	Car (char nam[80], int mod)

	{

		strcpy(name, nam);
		model = mod;

	}

};

enum transactionType { lease, purchase 

};

union payType {
	double leasePay; 	
	int purchasePay; 

	payType()
	{
		leasePay = 0;
		
	}


	payType(double lease)
	{
		leasePay = lease;
		
	}


	payType()
	{
		purchasePay = 0;

	}


	payType(int purchase)
	{
		purchasePay = purchase;

	}


};


int main() {

	





	return 0;
}