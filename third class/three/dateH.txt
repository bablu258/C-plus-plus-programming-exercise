// Bablu Banik
// Third Assingment - CSIT 840 



#include <string>
using namespace std;



class Date

{
private:
	int year;
	int month;
	int day;

public:
	Date();
	Date(const Date&);
	

	bool  operator==(const Date& dEqual) const;
	bool  operator>(const Date& dGreater) const;
	Date  operator - (const Date& dsubtraction) const;
	Date operator = (const Date&);


	friend istream& operator>>(istream&, Date&);
	friend ostream &operator<<(ostream&, Date&);
	

};
