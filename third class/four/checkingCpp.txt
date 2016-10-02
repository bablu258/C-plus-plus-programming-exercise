//Bablu Banik
//CSIT 840 Spring 2015


#include "checking.h"
#include <iostream>
#include <string>
#include<cstring>
using namespace std;

checking::checking()
{
	overdraftProtection = false;

}

checking::checking(customer g, double m, bool c) : account(g, m)
	
{
	
	overdraftProtection = c;
}

void checking::makeDeposit(double de)
{
	account::makeDeposit(de);

}

bool checking::makeWithdrawal(double wi)
{ 
	if (overdraftProtection == true || account::balance >= wi)
		return account::makeWithdrawal(wi);
	else
		return false;

}
void checking:: adjustBalance()
{
	const double minDefaultCharge = 10.00;
	const double minAmount = 1000.00;
	if (account::balance < 1000)
	{
		account::balance = account::balance - minDefaultCharge;

	}
	else
		account::balance = account::balance;

}
void checking:: view()
{
	cout << "Checking Account " << endl;
	account::view();
}