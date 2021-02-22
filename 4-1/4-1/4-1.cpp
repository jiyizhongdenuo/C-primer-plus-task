#include<iostream>
#include<string>
int main(void)
{
	using namespace std;
	string fname;
	char sname[20];
	char trade;
	int age;
	cout << "What is your first name?";
	getline(cin, fname);
	cout << "What is your last name?";
	cin.getline(sname, 20);
	cout << "What letter grade do you deseerve?";
	cin >> trade;
	cout << "What is your age ?";
	cin >> age;
	cout << "Name:" << fname << ", " << sname << endl;
	cout << "Grade: " << trade << endl;
	cout << "Age: " << age;
	return 0;


}