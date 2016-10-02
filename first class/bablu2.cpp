#include <iostream>
using namespace std;
#include <string>
int main()

{
	int numSoldToday;
	// step A

	
	double pricePerPiece; // given
	double totalPerPrice, // given
		   totalPrice; // calculated


	int numSoldNxtwk,
		numsoldNxmt;
	string typeoffruit = "apples";



	// step 1 : assign given value


	numSoldToday = 60;
	pricePerPiece = .30;
	typeoffruit = "apples";
	quality = "B"



	//step 2 : do calculation


	totalPrice = numSoldToday * pricePerPiece;
	numSoldNxtwk = numSoldToday + 10; // next week we need 10 more sales than we are going to make today
	numsoldNxmt = numSoldNxtwk * 2; // next month we need twice more sales

	// setp 3 dispaly the result

	cout << "number solid today" << numSoldToday << endl;
	cout <<
	cout << "price per piece : $" << pricePerPiece << endl;
	cout << "total price: " << totalPrice << endl;



		return 0;



}