#include <iostream>
using namespace std;
#include <string>
void reverseOrder(char[100]);
void sortAlpha(char[50]);

int main()
{	
	char question1[] = "Enter a text to reverse the order of each word in the sentence. ";
	char s [100] ;
	cout << question1 << endl;
	cin.getline(s, 100);
	reverseOrder(s);


	char a[50], b[50], c[50];
	cout << "Enter a text to alphabetically sort each word in the sentence" << endl;
	cin >> a >> b >> c;
	sortAlpha(a);
	sortAlpha(b);
	sortAlpha(c);
	cout << " " << endl;
	



	return 0;
}

void reverseOrder(char s [100]){



	size_t len = 0, i, j;
	while (s[len])
		++len;

	
	i = 0, j = len;
	while (i < j--)
	{
		char c = s[i]; 
		s[i++] = s[j];
		s[j] = c;
	}

	
	i = 0;
	while (s[i])
	{
		
		while (s[i] == ' ') 
			++i;

		
		j = i;
		while (s[j] && s[j] != ' ') 
			++j;

		
		size_t last = j;
		while (i < j--)
		{
			char c = s[i]; 
			s[i++] = s[j];
			s[j] = c;
		}

		
		i = last;
	}

	cout << s << '\n';


}

void sortAlpha(char s [50]){

	char tem[100];
	char test;
	for (int k = 0; s[k] != 0; k++)
	{
		if (isupper(s[k]))
		{
			tem[k] = s[k];
			s[k] = tolower(s[k]);
			test = s[k];
			

		}
		tem[k] = '\0';
	}

	char t;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = i + 1; s[j] != '\0'; j++)
		{
			if (s[i]>s[j])
			{
				
					t = s[i];
					s[i] = s[j];
					s[j] = t;
				
			}
		}
	}

	bool po = true;
	for (int k = 0; s[k] != 0; k++)
	{
		
		if (po == true)
		{
			char te = s[k];

			if (te == towlower(test))
			{
				s[k] = toupper(test);
				po = false;
			}
		}

	}

	cout << s << " ";
	
}