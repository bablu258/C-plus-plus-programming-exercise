//Bablu Banik
//CSIT 840 Spring 2015


#ifndef SAVING_H

#define SAVING_H


//  Body of  SAVING_H goes here; that is, everything you need to declare in  SAVING_H

#include <string>
#include "account.h"

using namespace std;

class saving : public account{
protected:
	double interestRate;
public:
	saving();
	saving(customer a, double g, double b); // a = two args constructor
	void makeDeposit(double de);
	bool makeWithdrawal(double c);
	void adjustBalance();
	void view();

};

#endif