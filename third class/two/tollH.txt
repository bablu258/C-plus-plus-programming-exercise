// Bablu Banik
// Assignment 2
// CSIT 840,  Object-Oriented Programming in C++


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