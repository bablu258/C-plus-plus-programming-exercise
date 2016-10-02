//combined-assignment-1.cpp
/*
Assuming a and b are both integer variables
And op is an arithmetic operator:  +, *, -, /, or %
Then, in general:
a = a op b;
can be written using combined assignment as:
a op= b;
*/
#include <iostream>
using namespace std;
int main()
{
	int a = 5, b = 3;
	a += b;  //a = a + b;
	cout << a << endl;  //a is 8

	a = 5, b = 3;
	a *= b;  //a = a * b; there cannot be any space between * and =
	cout << a << endl;  //a is 15

	a = 5, b = 3;
	a -= b;  //a = a - b;
	cout << a << endl; //a is 2

	a = 5; b = 3;
	a = -b; // take 3 and put - just before 3. space is optional between - and b ; as there is no combination in consederdation 
	cout << a << endl; //a is -3

	a = 5; b = 3;
	//a =* b;  //<=== COMPILER ERROR!!

	a = 5; b = 3;
	a /= b;  //a = a / b;
	cout << a << endl;  //a is 1

	a = 5; b = 3;
	//a =/ b;  //<=== COMPILER ERROR!!

	a = 5; b = 3;
	a %= b;  //a = a % b;  it keeps reminder 
	cout << a << endl;  //a is 2. moduler division; if 5/3, there is remionder is 2. 

	a = 5; b = 3;
	//a =% b;  //<=== COMPILER ERROR!!

	a = 5; b = 3;
	a *= b + 1;  //a = a * b + 1  OR  a = a * (b + 1) ?? answer is a = a * (b + 1)
	cout << a << endl;  //a is ?

	return 0;
}
