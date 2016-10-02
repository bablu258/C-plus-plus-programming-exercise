#include <iostream>
using namespace std;
#include <string>
int deep ();
void deeper();
void deepest(string, int);


int main()
{
	cout << " i am in the main." << endl;
	cout << " the value of deep is: " << deep () << endl;
	deeper();
	deepest(" the value of deep is: ", 99);

	return 0;
}

int deep()

{
	int b;
	b = 25 + 23;
	return b;


}

void deeper()

{
	cout << " the value of deeper is: " << deep() + 23 << endl;


}

void deepest(string s, int p)

{
	cout << s ;
	cout << p << endl;


}