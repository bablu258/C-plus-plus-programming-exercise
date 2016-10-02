// Bablu Banik
// Third Assingment - CSIT 840 




#include <iostream>
using namespace std;
#include "date.h"

Date::Date()
{
	year = 2001;
	month = 1;
	day = 1;

}


Date::Date(const Date& p)

{
	year = p.year;
	month = p.month;
	day = p.day;
}




bool Date::operator==(const Date& dEqual) const
{
	return((month == dEqual.month) && (day == dEqual.day) && (year == dEqual.year));

}

bool Date::operator > (const Date& dGreater) const
{
	bool OneDateGra = true;
	
	if (year > dGreater.year)
		OneDateGra;
	else if (year < dGreater.year)
		OneDateGra = false;
	else if (year == dGreater.year)
	{
		if (month > dGreater.month)
			OneDateGra;
		else if (month < dGreater.month)
			OneDateGra = false;
		else if (month == dGreater.month)
		{
		 if (day > dGreater.day)
			OneDateGra;
		else
			OneDateGra = false;
		}
	}

	return OneDateGra;
	

}

Date Date::operator - (const Date& dGreater) const
{
	Date tem(*this);

	

	if (tem.day >= dGreater.day)
	{
		tem.day = tem.day - dGreater.day;
		if (tem.month >= dGreater.month)
		{
			tem.month = tem.month - dGreater.month;
			tem.year = tem.year - dGreater.year;

		}
		else
		{
			tem.month = (tem.month + 12) - dGreater.month;
			tem.year = (tem.year - 1) - dGreater.year;


		}



	}

	else if (tem.day < dGreater.day)
	{
		tem.day = (tem.day + 30) - dGreater.day;
		tem.month = tem.month - 1;
		if (tem.month >= dGreater.month)
		{
			tem.month = tem.month - dGreater.month;
			tem.year = tem.year - dGreater.year;

		}
		else
		{
			tem.month = (tem.month + 12) - dGreater.month;
			tem.year = (tem.year - 1) - dGreater.year;


		}


	}

	



	return tem;

}

Date Date::operator=(const Date& p)

{
	

	
	month = p.month;
	day = p.day;
	year = p.year;

	return *this;

}


istream& operator>>(istream& strm, Date& p)
{
	// this space available, your code here
	
	
	cout << "Enter month (1 - 12): ";
	strm >> p.month ;
	
	cout << "Enter day (1 to maximum days in month): ";
	strm >> p.day;
	
	cout << "Enter year (>= 1800) : ";
	strm >> p.year;


	return strm;
	
}

ostream& operator<<(ostream& strm, Date& p)
{
	// this space available, your code here
	strm << p.month <<" / " <<p.day <<" / "<<p.year;
	return strm;
	

}





