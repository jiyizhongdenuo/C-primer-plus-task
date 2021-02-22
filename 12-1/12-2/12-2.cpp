#include <iostream>
#include"string.h"
using namespace std;
int main()
{
	String s1(" and I am a C++ student.");
	String s2 = "Please enter your name: ";
	String s3;
	cout << s2;
	// overloaded << operator
	cin >> s3;
	// overloaded >> operator
	s2 = "My name is " + s3;
	// overloaded =, + operators
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.Stringup();
	// converts string to uppercase
	cout << "The string\n" << s2 << "\ncontains " << s2.cal('A')
		<< " 'A' characters in it.\n";
	s1 = "red";
	// tstring(const char *),
	// then tstring & operator=(const string&)
	String rgb[3] = { String(s1), String("green"), String("blue") };
	cout << "enter the name of a primary color for mixing light: ";
	String ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.Stringlow();
		// converts string to lowercase
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i]) // overloaded == operator
			{
				cout << "That's right!\n";
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
			cout << "Try again!\n";
	}
	cout << "Bye" << endl;
	return 0;
}
