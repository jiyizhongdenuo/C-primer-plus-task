#include<iostream>
#include<string>
int main(void)
{
	using namespace std;
	const int Nsize = 20;
    string fname, lname;
	cout << "Enter your first name:";
	getline(cin, fname);
	cout << "Enter your last name: ";
	getline(cin,lname);
	fname+=lname;
	cout << "Here's the information in a single string: " << fname;
	return 0;
}