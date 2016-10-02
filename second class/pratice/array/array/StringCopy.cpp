#include <iostream> 
using namespace std;
void StringCopy(char*, char*);

int main()
{
	char input1[80], input2[80];
	cout << "Input first string: ";
	cin >> input1;
	cout << "Input second string: ";
	cin >> input2;
	StringCopy(input1, input2);
	cout << input1 << endl;
	system("pause");
	return 0;
}
void StringCopy(char a[], char b[])
{
	int len = strlen(b);
	for (int x = 0; x < len; x++)
	{
		a[x] = b[x];


	}

	a[len] = '\0';


}