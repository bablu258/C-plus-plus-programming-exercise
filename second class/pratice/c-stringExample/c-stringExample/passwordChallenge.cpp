

#include <iostream>
using namespace std;
#include <cstring>
bool isValidPassword(char password[]);

int main()
{
	char pWord[80];
	bool result;
	cout << "Password: " << endl;
	cin >> pWord;
	result = isValidPassword(pWord);
	if (result == true)
		cout << pWord << " is valid" << endl;
	else
		cout << pWord << " is not valid" << endl;

	return 0;
}

bool isValidPassword(char pRefer[])
{
	bool upper = false;
	bool lower = false;
	bool digit = false;
	bool length = true;
	bool end = false;
	// length determinator
	int len = (strlen(pRefer));
	
	if (!(len > 6 && len <= 8))
		length = false;
	else if (len > 6 && len <= 8)
		length = true;

	if (length == true)
	{
		for (int count = 0; count < len ; count++)
		{

			if (isupper(pRefer[count]))
				upper = true;
			else if (islower(pRefer[count]))
				lower = true;
			else if (isdigit(pRefer[count]))
				digit = true;
			if (upper == true && lower == true && digit == true)
				end = true;


		}

	}

	return end;
}

