


#include <iostream>
using namespace std;

int main()


{
	int  mph;
	int limit,  counter = 1;


	cout << " What is the speed of the vehicle in mph? ";
	cin >> mph;
	cout << " How many hours has it traveled? ";
	cin >> limit;


	
	/*
	while (counter <= limit)
	
	
	{
		
		cout << counter << "      " << counter * mph << endl; 
		counter ++;


	}

	*/

	for (counter = 1; counter <= limit; counter++)
	{
		cout << counter << "      " << counter * mph << endl;

	}

	return 0;
}