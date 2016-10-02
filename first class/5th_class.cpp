// sales input / out put


#include <iostream>

using namespace std;

int main()

{

	int num;
	double priceperdog;
	double pricebeforetax ;
	double tax = .1;
	double pricewithtax;


	

	// veriable in pripo example


	cout << "how many hot dog? ";
    cin >> num;

	cout << " price per hot dog ";
	cin >> priceperdog;

	// cal > price without tax
	pricebeforetax = num * priceperdog;
	
	cout << " price before tax ";
	cin >> pricebeforetax;

	// cal.> price with tax

	pricewithtax = pricebeforetax + (pricebeforetax * tax);

  // display

	cout << "The price with tax is: " << pricewithtax << endl;




	return 0;
}