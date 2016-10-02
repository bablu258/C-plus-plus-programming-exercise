//Bablu Banik
//CSIT 840 Spring 2015


#ifndef ACCOUNT_H

#define ACCOUNT_H

//  Body of account.h goes here; that is, everything you need to declare in account.h
#include <string>
#include "customer.h"

using namespace std;



class account

{

protected:
	double balance;
	customer cust;

public:
	account();
	account(customer b, double a);
	virtual void  makeDeposit(double d);
	virtual bool makeWithdrawal(double a);
	double getBalance();
	virtual void adjustBalance() = 0;
	virtual void view();

};



#endif