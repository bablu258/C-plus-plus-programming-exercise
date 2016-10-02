//Bablu Banik
//CSIT 840 Spring 2015

#include <iostream>
#include <string>
#include<cstring>
using namespace std;
#include "account.h"

account::account(): 
cust()

{
	balance = 0;
	
}

account::account(customer c , double a): 
cust(c)

{
	balance = a;
	
}

void account:: makeDeposit(double d)
{
	balance = balance + d ;
	
}

bool account::makeWithdrawal(double a)
{
	balance = balance - a;
	return true;
}

double account::getBalance()
{
	return balance;

}




void account::view()
{
	cust.view();
	cout << "Balance: $"<<balance << endl;
}