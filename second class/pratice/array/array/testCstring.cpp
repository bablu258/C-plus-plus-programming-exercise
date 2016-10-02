#include <iostream>
//#include <cstring>
using namespace std;
const int MAX_NAME = 3;
void assignNames(char**);

int main()
{
	char* names[MAX_NAME];
	assignNames(names);
	for (int y = 0; y < MAX_NAME; y++)
		cout << " The name of " << y + 1 << " person is  " << names[y] << endl;
	for (int y = 0; y < MAX_NAME; y++)
		delete names[y];
	return 0;

}

void assignNames(char** counter)

{

	for (int x = 0; x < MAX_NAME; x++)
	{
		char buffer[80];
		cout << " Enter name: " << endl;
		cin.getline (buffer, 80);
		counter[x] = new char[strlen(buffer) + 1];
		strcpy(counter[x], buffer);


	}



}
