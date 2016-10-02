// Bablu Banik
// Assignment 2
// CSIT 840,  Object-Oriented Programming in C++




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