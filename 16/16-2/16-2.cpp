#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool ispal(string & s);
int main()
{
	string st;
	cout << "Enter a string (empty string to quit):\n ";
	getline(cin, st);
	while (cin&&st.size() > 0)
	{
		if (ispal(st))
			cout << "ispal.\n";
		else
			cout << "not pal.\n";
		cout << "Enter a string (empty string to quit):\n ";
		getline(cin, st);
	}
	return 0;
}
bool ispal(string & s)
{
	for (int i = 0; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
	}
	string temp(s.rbegin(), s.rend());
	return (temp == s);
}