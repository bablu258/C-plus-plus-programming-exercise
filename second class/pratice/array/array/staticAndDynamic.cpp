#include <iostream>
#include <cstring>
using namespace std;
const int MAX_NAME = 3;
//void getNames(char[][6]);
void getNames(char**);

int main()
{
	char* names [MAX_NAME];
	getNames(names);
	for (int z = 0; z < MAX_NAME; z++)
		cout << " Name of the " << z + 1 << " person is  " << names[z] << "\n";
	for (int z = 0; z < MAX_NAME; z++)
	delete names[z];
	return 0;
}

void getNames(char** x)
{
	

	for (int y = 0; y < MAX_NAME; y++)
	{
		char buffer[80];
		cout << " Enter the name: " << endl;
		cin >> buffer;
		x[y] = new char[strlen(buffer) + 1];
		strcpy(x[y], buffer);

	}


}