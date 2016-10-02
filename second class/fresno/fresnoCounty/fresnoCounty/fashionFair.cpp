// Bablu Banik
// course: 839 (intermediate C++)

#include <iostream>
using namespace std;
// add any other standard library files you need
// TO DO - prototype posNeg

int proNeg(int*, int);

int main()
{
	int size, result;
	int* userInput;





	// declare any other variables you need
	// skip following two statements if you don't know how to create array dynamically
	cout << "How many array elements? ";
	cin >> size;
	userInput = new int [size];

	// TO DO - write code to create an int array dynamically
	/* if you don't know how to dynamically create the array,
	for less points, create the array another way you know */
	// TO DO - write code here inside main (not a separate function) to assign values to array
	// for less points, use a separate function
	// TO DO - call posNeg

	result = proNeg(userInput, size);

	

	if (result == 1)
		cout << "There are more positive than negative values in the array\n";
	else if (result == -1 )
	cout << "There are more negative than positive values in the array\n";
	else 
	cout << "There are the same number of positive and negative values in the array\n";
	// TO DO - write any additional code you may need
	return 0;
}

// TO DO - implement posNeg

int proNeg(int* user, int si)

{
	int positive = 0, negative = 0, fiResult,  zero = 0;

	for (int n = 0; n < si; n++)


	{
		cout << " Enter number: " << endl;
		cin >> user[n];

		if (!(user[n] == 0 ))

		{

			if (user[n]  > 0)

			{


				positive++;

			}

			if (user[n]  < 0)

			{
				negative++;


			}


		}

	}
		
	


	if (positive > negative)
	{
		fiResult = 1;
	}

	else if (positive < negative)
	{
		fiResult = - 1;
	}

	else if (positive == negative)
	{
		fiResult = 0;
	}


	return fiResult;



}




// my code does not work for Sample Run #2, but works for Sample Run # 1 and 3