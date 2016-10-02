//Bablu Banik
//CSIT 840 Spring 2015

#include <iostream>
#include <string>
#include<cstring>
using namespace std;
#include "customer.h"
//int NAME_SIZE = 25;
//int ID_SIZE = 10;

customer::customer()

{

	strcpy(name, " ");
	strcpy(accountID, " ");

}


customer::customer(char a[NAME_SIZE], char b[ID_SIZE])

{
	strcpy(name, a);
	strcpy(accountID, b);
	
}

void customer:: view()
{
	cout << "Name: " << name << endl;
	cout << "Account#: " <<accountID << endl;
	

}


customer customer::operator=(const customer& p)

{

	strcpy(accountID, p.accountID);
	strcpy(name, p.name);

	return *this;
	

}



