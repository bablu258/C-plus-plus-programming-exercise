

#include <iostream>
using namespace std;
#include <string>;
//void outputprompt();
void inputprompt(string, int &);
//int isValidScore(int &);

int main()


{
	int score;

	//outputprompt(); 
	
	


	do
	{
		inputprompt(" Enter a valid number : ", score);

	} while (score <0 || score > 100);


	
	
	cout << " your number is: " << score << endl;




	return (0);
}


//void outputprompt()
//
//{
//
//	cout << " Enter a number: " << endl;
//}


void inputprompt(string s, int & n)

{
	cout << s << endl;
	

	cin >> n;
	

}


//int isValisScore(int &k)
//
//{
//	if (k <= 0)
//		return false;
//	else
//		return true;
//
//}