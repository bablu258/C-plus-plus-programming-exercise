
#include <iostream> 
using namespace std;
void StringAppend(char *first, char *second);

int main()
{
	char input1[80], input2[80];
	cout << "Input first string: ";
	cin >> input1;
	cout << "Input second string: ";
	cin >> input2;
	StringAppend(input1, input2);
	cout << input1 << endl;
	system("pause");
	return 0;
}

void StringAppend(char fir[], char sec[])
{
	int len = strlen (fir) + strlen(sec);
	cout << len;

	for (int x = 0; x < len; x++)
	{

		fir [x] = fir[x] + sec[x];
	}


	// logic error ask pofessor

	fir[len] = '\0';

}