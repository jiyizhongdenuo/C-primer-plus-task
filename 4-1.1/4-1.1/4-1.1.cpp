#include<iostream>
#include<string>
struct Name {
	std::string fname;
	std::string sname;
	char trade;
	int age;
}na1;
int main(void)
{
	using namespace std;
	cout << "What is your first name?";
	getline(cin, na1.fname);
	cout << "What is your last name?";
	getline(cin,na1.sname);
	cout << "What letter grade do you deseerve?";
	cin >> na1.trade;
	cout << "What is your age ?";
	cin >> na1.age;
	cout << "Name:" << na1.fname << ", " << na1.sname << endl;
	cout << "Grade: " << na1.trade << endl;
	cout << "Age: " << na1.age;
	return 0;


}