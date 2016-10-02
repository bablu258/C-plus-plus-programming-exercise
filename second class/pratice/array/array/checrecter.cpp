#include <iostream>
using namespace std;
// include any other library files you need
// prototype isValidPassword

int main()
{
	char pword[80];
	bool result;
	cout << "Password: ";
	cin >> pword;
	/* call isValidPassword */
	if (result == true)
		cout << pword << " is valid\n";
	else
		cout << pword << " is not valid\n";
	return 0;
}

// implement isValidPassword