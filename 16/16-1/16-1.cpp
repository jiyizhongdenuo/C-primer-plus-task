#include<iostream>
#include<string>
using namespace std;
bool ispal(string & s);
int main()
{
	string st;
	cout << "Enter a string (empty string to quit):\n ";
	getline(cin, st);
	while (cin&&st.size()>0)
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
	string temp(s.rbegin(), s.rend());
	return (temp == s);
}