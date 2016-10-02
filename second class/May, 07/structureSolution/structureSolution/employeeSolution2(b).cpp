#include <iostream>
using namespace std;

struct employeeData{

	int employeeId;
	char name[80];
	float hours;
	float payrate;
};

void input(employeeData*, int);
void output(employeeData[], int);

int main()
{
	int numOfEmp;
	cout << "How many employees are there? " << endl;
	cin >> numOfEmp;
	employeeData *nam;
	nam = new employeeData[numOfEmp];
	input(nam, numOfEmp);
	output(nam, numOfEmp);
	delete [] nam;
	return 0;
}

void input(employeeData* e, int number)


{
	for (int i = 0; i < number; i++)
	{
		cout << " Enter the employee Id: " << endl;
		cin >> e[i].employeeId;
		cout << " Enter the employee Name: " << endl;
		cin.ignore();
		cin.getline(e[i].name, 80);
		cout << " Enter the hours he/she works in a day: " << endl;
		cin >> e[i].hours;
		cout << " Enter the pay rate he/she gets: " << endl;
		cin >> e[i].payrate;


	}


}


void output(employeeData nuM[], int condition)

{

	for (int i = 0; i < condition; i++)
	{
		cout << " The employee Id is : " << nuM[i].employeeId << endl;
		cout << " The employee name is : " << nuM[i].name << endl;
		cout << " The employee works : " << nuM[i].hours << "hours." << endl;
		cout << " And payrate is : " << nuM[i].payrate << " dollars per hour" << endl;
		cout << " And gross pay is : " << nuM[i].payrate * nuM[i].hours << endl;


	}



}