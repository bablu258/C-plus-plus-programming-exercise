#include <iostream> 
using namespace std; 
int main() 
{ 
	const int LENGTH = 80;   
	// Maximum length for string 
	char line[LENGTH];       
	// Array of char 10 11 // Read a string into the character array. 
	cout << "Enter a sentence of no more than " 
		<<  LENGTH-1 << " characters:\n"; 
	cin.getline(line, LENGTH); 
	cout << "The sentence you entered is:\n" ; 

	/*cout << "The sentence you entered is:\n" << line << endl;*/
	/*!= '\0'*/
	
	// Loop through the array printing each character. 
	for (int index = 0; line[index] != '\0'; index++)
	{ 
		cout << line[index]; 
	} 
	return 0; 
}
