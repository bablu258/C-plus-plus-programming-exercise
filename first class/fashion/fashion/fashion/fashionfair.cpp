
// Bablu Banik
// Completed Parts: 1,2,3,4 and 5

#include <iostream>

using namespace std;

#include <string>

#include <fstream>

int main()
{
  const int starting_balance = 100;
  int deposit, withdrawal, amont_after_deposit, ending_balance;
  double total_of_starting_and_ending;
  double average_balance;
  string bank;
  ofstream sky;

  // user input

  cout << " Enter deposit amount: ";
  cin >> deposit;
  cin.ignore();
  cout << " Enter Withdrawal amount: ";
  cin >> withdrawal;
  cin.ignore();
  cout << " Bank name: ";
  getline(cin, bank);

  // calculation of ending balance

  amont_after_deposit = starting_balance + deposit;
  ending_balance = amont_after_deposit - withdrawal;
  total_of_starting_and_ending = starting_balance + ending_balance;
  average_balance = total_of_starting_and_ending / 2;
 
  // display

  cout << " Deposit: " << deposit << endl;
  cout << " Withdrawal: " << withdrawal << endl;
  cout << " The ending balance: " << ending_balance << endl;
  cout << " Average Balance: " << average_balance << endl;
  cout << " Bank name: " << bank << endl;


  // text file

  sky. open ("sky.txt");
  sky << " Deposit: " << deposit << endl;
  sky << " Withdrawal: " << withdrawal << endl;
  sky << " The ending balance: " << ending_balance << endl; 
  sky << " Average Balance: " << average_balance << endl; 
  sky << " Bank name: " << bank << endl;


	return 0;
}