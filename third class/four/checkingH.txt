//Bablu Banik
//CSIT 840 Spring 2015

#ifndef CHECKING_H

#define CHECKING_H

//  Body of CHECKING_H goes here; that is, everything you need to declare in CHECKING_H
#include <string>
#include "account.h"

using namespace std;


class checking : public account {
protected:
	bool overdraftProtection;


public:
	checking();
	checking(customer g, double m, bool c);
	void makeDeposit(double de);
	bool makeWithdrawal(double wi);
	void adjustBalance();
	virtual void view();



};



#endif