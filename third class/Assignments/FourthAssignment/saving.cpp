//Bablu Banik
//CSIT 840 Spring 2015


#include "saving.h"
#include <iostream>
#include <string>
#include<cstring>
using namespace std;
saving::saving()
{
	interestRate = 0;

}
saving::saving(customer a, double g, double b) : account(a, g)
{
	
	interestRate = b;

}

void saving::makeDeposit(double de)
{
	const double reward = 100;
	
	if (de < 10000)
	account::makeDeposit(de);
	else
		account::makeDeposit(de + reward);

		
}

bool saving::makeWithdrawal(double c)
{
	if (account::balance >= c)
		return account::makeWithdrawal(c);
	else
		return false;
}

void saving::adjustBalance()
{
	double currentAm = account::balance;
	double actualInterest = currentAm * interestRate;
	double finalAm;
	finalAm = currentAm + actualInterest;
	account::balance = finalAm;

}

void saving::view()
{
	cout << "Saving Account " <<  endl;
	account::view();
	
}