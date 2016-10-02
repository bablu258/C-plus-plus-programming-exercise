
#include <iostream>
using namespace std;
#include <string>


struct subjectInfo {

	int numSection;
	string subjectName;

};

struct numTeacher {

	string teacherName;
	subjectInfo * subjtInfo;
	int numSubject;

	numTeacher() {

		teacherName = "";
		subjtInfo = NULL;
		numSubject = 0;
	}

};


void input (numTeacher[], int );
void output(numTeacher[], int );

int main() {
	int  numOfTeacher;
	numTeacher * referTonumTeacher;

	cout << " How many teachers we have in the college? " << endl;
	cin >> numOfTeacher;
	cin.ignore();
	referTonumTeacher = new numTeacher[numOfTeacher];

	input(referTonumTeacher, numOfTeacher);
	output(referTonumTeacher, numOfTeacher);

	for (int x = 0; x < numOfTeacher; x++)
	delete[] referTonumTeacher[numOfTeacher].subjtInfo;

	delete[] referTonumTeacher;

	
	return 0;
}

void input(numTeacher * referTonumTeacher, int num1){

	for (int i = 0; i < num1; i++)
	{
		cout << " The name of the teacher" << endl;
		getline (cin, referTonumTeacher[i].teacherName);
		int numberOfSubject;
		cout << " How many subjects he or she teaches? " << endl;
		cin >> numberOfSubject;
		referTonumTeacher[i].numSubject = numberOfSubject;
		referTonumTeacher[i].subjtInfo = new subjectInfo[numberOfSubject];
		for (int x = 0; x < numberOfSubject; x++)
		{
			cout << " The section number is: " << endl;
			cin >> referTonumTeacher[i].subjtInfo[x].numSection;
			cin.ignore();
			cout << " The class name is: " << endl;
			//cin >> referTonumTeacher[i].subjtInfo[x].subjectName;
			getline(cin, referTonumTeacher[i].subjtInfo[x].subjectName);

		}

	}
	
}

void output(numTeacher * referTonumTeacher, int num2){

	for (int x = 0; x < num2; x++){

		cout << " The teacher name is: " << referTonumTeacher[x].teacherName << endl;
		for (int n = 0; n < referTonumTeacher[x].numSubject; n++)
		{
			cout << " Section number is : " << referTonumTeacher[x].subjtInfo[n].numSection << endl;
			cout << " Section name is : " << referTonumTeacher[x].subjtInfo[n].subjectName << endl;

		}

	}

}