#include <iostream> 
using namespace std;
int StringLength(char *);

int main()
{
	char input[80];
	int len;
	cout << "Input a string: ";
	//cin >> input;
	cin.getline(input, 80);
	len = StringLength  (input);
	cout << "Length = " << len << endl;
	system("pause");
	return 0;
}
int StringLength(char b [])

{

	int counter = 0, x = 0;
	while (b[x] != '\0')
	{
		counter++;
		x++;
	}

	return counter;

}