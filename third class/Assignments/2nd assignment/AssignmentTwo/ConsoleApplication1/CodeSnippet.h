
	/* 
	The problem this program is trying to solve
	
	A college has decided to charge each of her students a fifty-cent 
	toll to enter classroom. There was a tollbooth just outside the 
	door of each of her classes. Usually the students paid the toll, 
	but sometimes a student successfully sneaked in without paying. 
	The tollbooth kept track of the number of students that had gone by, 
	and of the total amount of money collected.
	
	This program is developed in Visual Studio using C++ by Bablu Banik
	
	
	This project will have three files, toll.h 
	(the declaration file for the TollBooth class), 
	toll.cpp (the implementation file for the TollBooth class) 
	and test.cpp (the “driver” file which tests the class). 
	
	 */

	 // this is too.h - header class

	#include <string>

	using namespace std;
	class TollBooth

	{

	private:

		static int m_nCourseCount;
		int m_nPayingStus;
		float tollCollected;
		const float tollAmountForEcahStudent = 0.5;
		float calTollForEachClass;
		int m_nDeadbeatStus;
		int totalStu;
		

	public:

		TollBooth();
		static int getCourseCount();
		void setInputs();
		int getNumStudents();
		float calcTollCollected();
		int getNumDeadBeats();

	};


	// this is toll.cpp - this is implementation of the header class

	#include <iostream>

	using namespace std;

	#include "toll.h"

	int TollBooth::m_nCourseCount = 0;

	TollBooth::TollBooth()
	{
		

	}


	void TollBooth::setInputs()
	{
		int numStudentIneachClass;
		int numStudentPaying;
		float otalAmont;
		int notPayingStu;
		cout << " How many students entered the room? " << endl;
		cin >> numStudentIneachClass;
		cout << " How many students paid? " << endl;
		cin >> numStudentPaying;
		
		while (numStudentIneachClass < numStudentPaying)
		{
			cout << " *** Invalid input: more paying than entered! ***" << endl;
			cout << " How many students entered the room? " << endl;
			cin >> numStudentIneachClass;
			cout << " How many students paid? " << endl;
			cin >> numStudentPaying;

		}

		totalStu = numStudentIneachClass;
		m_nPayingStus = numStudentPaying;
		//cout << " num of paying stu " << m_nPayingStus << endl;
		otalAmont = numStudentPaying * tollAmountForEcahStudent;
		calTollForEachClass = otalAmont;
		notPayingStu = numStudentIneachClass - numStudentPaying;
		m_nDeadbeatStus = notPayingStu;
		m_nCourseCount++;
	}

	 int TollBooth::getCourseCount()
	{

		 return m_nCourseCount;
		
	}

	 int TollBooth::getNumStudents()
	 {
		// return m_nPayingStus;
		 return totalStu;
	 }

	 float TollBooth:: calcTollCollected()
	 {
		 return calTollForEachClass;
	 }

	 int TollBooth::getNumDeadBeats()
	 {
		 return m_nDeadbeatStus;
	 }
	 
	 
	 
	 //This is the driver class with main function 
	 
	 
	 
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

		
		tboothPtr = new TollBooth[maxCourses];
		for (int i = 0; i < maxCourses; i++)
			cout << " Now creating an uninitialized course element ...." << endl;

		inputCourseData(tboothPtr, maxCourses);

		outputCourseInfo(tboothPtr, totalTollAmt);

		displayAvgToll(totalTollAmt);  

		
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