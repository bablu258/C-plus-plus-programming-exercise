#include <iostream>
using namespace std;

struct date {
	int day, month, year;
};

struct employeeData
{
	int empolyeeId;
	char name[80];
	float hours;
	float payrate;
	date birthday;

};

void input(employeeData*);
void output(employeeData);


int main() {

	employeeData data;
	input(&data);
	output(data);



}

void input(employeeData *ref)
{

	cout << " Enter the employee Id: " << endl;
	cin >> ref->empolyeeId;
	cout << " Enter the employee Name: " << endl;
	cin.ignore();
	cin.getline(ref->name, 80);
	cout << " Enter the hours he/she works in a day: " << endl;
	cin >> ref->hours;
	cout << " Enter the pay rate he/she gets: " << endl;
	cin >> ref->payrate;
	cout << "Enter the birthday in the format mm day year: " << endl;
	cin >> ref->birthday.month >> ref->birthday.day >> ref->birthday.year;

}

void output(employeeData ref)

{
	cout << " The employee Id is : " << ref.empolyeeId << endl;
	cout << " The employee name is : " << ref.name << endl;
	cout << " The employee works : " << ref.hours << "hours." << endl;
	cout << " And payrate is : " << ref.payrate << " dollars per hour" << endl;
	cout << " And gross pay is : " << ref.payrate * ref.hours << endl;
	cout << "His date of bithday is " << ref.birthday.month << " / " << ref.birthday.day << " / " << ref.birthday.year;

}

