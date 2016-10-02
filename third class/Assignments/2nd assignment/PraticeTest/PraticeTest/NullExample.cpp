
#include <iostream>
using namespace std;

int main()
{
	cout << " test is ready" << endl;
	//int myvar = NULL ;
	//int myvar  ;
	int myvar = 235;
	int *foo = &myvar;
	int bar = *foo;
	cout << foo << endl; // printing the address of the myvar
	cout << bar << endl; // printing the value of the myvar


	// auto key word example
	auto var = "name";
	auto num = 2564;
	auto num2 = 23.56;
	auto charer = 'a';
	cout << var << endl;
	cout << num << endl;
	cout << num2 << endl;
	cout << charer << endl;




	return 0;
}
