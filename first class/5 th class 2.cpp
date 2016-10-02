

// Bablu Banik, code : 802 

// holiday calculation


#include <iostream>

using namespace std;

#include <string>

int main()



{

	string em1;
	int si1;
	string em2;
	int si2;
	string em3;
	int si3;
	string em4;
	int si4,
	totalsickday;
	double aveage;
	const int lnumbe = 4;



	cout << " enter the name of first employee ";
	cin >> em1;
	cout << " how many days for sick holiday ";
	cin >> si1;

	cout << " enter the name of second employee ";
	cin >> em2;
	cout << " how many days for sick holiday ";
	cin >> si2;

	cout << " enter the name of the third employee ";
	cin >> em3;
	cout << " how many days for sick holiday ";
	cin >> si3;

	cout << "  ener the name of fourth employee ";
	cin >> em4;
	cout << " how many day for sick holiday ";
	cin >> si4;


	// cal holiday

	totalsickday = si1 + si2 + si3 + si4;

	
	// cal average holiday

	aveage = (double)totalsickday / lnumbe;


	// display



	cout << em1 << " : " << si1 << endl;
	cout << em2 << " : " << si2 << endl;
	cout << em3 << " : " << si3 << endl;
	cout << em4 << " : " << si4 << endl;

	cout << " total sick days : " << totalsickday << endl;

	cout << " average sick days : " << aveage << endl;





	return 0;
}