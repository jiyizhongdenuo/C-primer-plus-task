#include<iostream>
#include<string>
#include<fstream>
#include<cctype>
using namespace std;
bool ispal(string & s);
int main()
{
	ifstream fin;
	fin.open("string.txt");
	string st;
	getline(fin, st);
	while (cin&&st.size() > 0)
	{
		if (ispal(st))
			cout << "ispal.\n";
		else
			cout << "not pal.\n";
		getline(fin, st);
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