// Bablu Banik
// Assignment 2
// CSIT 840,  Object-Oriented Programming in C++



//test.cpp

/*

Insert all your include directives here

*/

#include <iostream>
#include <iomanip> 
#include <string>
#include "toll.h"

using namespace std;

void inputCourseData(TollBooth*, int);

void outputCourseInfo(TollBooth*, float&);

void displayAvgToll(float);

float calcAvgToll(float);



int main()

{

	int maxCourses; //input for dynamic memory allocation

	float totalTollAmt = 0; //calculated for all courses

	cout << "How many courses maximum? ";

	cin >> maxCourses;

	TollBooth* tboothPtr;

	//Here you must dynamically create an array of TollBooth objects, pointed to by tboothPtr
	tboothPtr = new TollBooth[maxCourses];
	for (int i = 0; i < maxCourses; i++)
		cout << " Now creating an uninitialized course element ...." << endl;

	inputCourseData(tboothPtr, maxCourses);

	outputCourseInfo(tboothPtr, totalTollAmt);

	displayAvgToll(totalTollAmt);  

	//Here you should release your dynamically allocated memory
	delete[] tboothPtr;

	return 0;

}





void inputCourseData(TollBooth* tbPtr, int max)
{
	char goOn = 'y';

	for (int i = 0; i<max && goOn == 'y'; i++)
	{
		cout << "Enter 'y' to initialize new course data; any other character to quit: ";
		cin >> goOn;
		goOn = tolower(goOn);
		if (goOn == 'y')
		{
			cout << "For course " << i + 1 << ":\n";
			tbPtr[i].setInputs();
			//(tbPtr + i)->setInputs();  //alternative
		}
	}
}



void outputCourseInfo(TollBooth* tbPtr, float& totalAmt)
{
	cout << fixed << showpoint << setprecision(2);
	for (int j = 0; j<TollBooth::getCourseCount(); j++)
	{
		cout << "For course " << j + 1 << ":\n";
		cout << tbPtr[j].getNumStudents() << " students are in the course\n";
		cout << "The toll collected is $" << tbPtr[j].calcTollCollected() << endl;
		totalAmt += tbPtr[j].calcTollCollected();
		cout << tbPtr[j].getNumDeadBeats() << " students didn't pay\n";
	}
}



void displayAvgToll(float totalAmount)
{
	if (TollBooth::getCourseCount() > 0)
		cout << "The average toll per course is $" << calcAvgToll(totalAmount) << endl;
	else
		cout << "No actual courses\n";
}

float calcAvgToll(float total)
{
	return total / TollBooth::getCourseCount();
}