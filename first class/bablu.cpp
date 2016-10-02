#include <iostream>
using namespace std;
int main()
{
	cout << 5 + 2 << endl;
	cout << 5 * 2 << "\n"; // this is an unique way! 
	cout << 5 - 2 << endl;
	cout << 5 / 2 << endl; //the integer quotient
	cout << 5 % 2 << endl; //the integer remainder
	cout << 5.0 / 2 << endl; //the floating point quotient
	cout << 5 / 2.0 << endl; //ditto
	cout << 5.0 / 2.0 << endl; //ditto
	/*
	For floating point operands, addition, subtraction, and
	multiplication work the same as for integer operands;
	division, however, will give the floating point quotient
	as opposed to the integer quotient;
	the modulus operator, %, is NOT defined for
	floating point operands
	*/

	
	cout << "5 + 2 " << 5 + 2 << endl;
	cout << "5 * 2 is " << 5 * 2 << endl;
	cout << "5 - 2 is " << 5 - 2 << endl;
	cout << "5 / 2 is " << 5 / 2 << endl; //the integer quotient

	cout << 5.0 / 2 << endl; //the floating point quotient
	cout << 5 / 2.0 << endl; //ditto
	cout << 5.0 / 2.0 << endl; //ditto
	cout << "5 % 2 = " << 5 % 2 << endl; //the integer remainder
	cout << "5 " << 5 << endl;

	cout << "5 + 2 * 3"  << 5 + 2 * 3 << "\n";
	cout << "(5+2)*3 is"  << (5 + 2) * 3 << endl;

	
	return 0;
}