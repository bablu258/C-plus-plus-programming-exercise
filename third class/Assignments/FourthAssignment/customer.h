//Bablu Banik
//CSIT 840 Spring 2015


#ifndef CUSTOMER_H

#define CUSTOMER_H

//  Body of CUSTOMER_H goes here; that is, everything you need to declare in CUSTOMER_H

#include <string>
#include<cstring>
using namespace std;
const int NAME_SIZE = 35;
const int ID_SIZE = 10;

class customer{
private:
	char accountID[ID_SIZE];
	char name[NAME_SIZE];

public:
	customer();
	customer(char a[NAME_SIZE], char b[ID_SIZE]);
	void view();

	customer customer::operator=(const customer& p);

};




#endif