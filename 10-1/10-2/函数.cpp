#include"10-2.h"
#include<iostream>
#include<cstring>
using namespace std;
Person::Person(const string &ln, const char * fn )
{
	lname = ln;
	strcpy_s(fname, fn);
}
void Person::show()const
{
	cout << "my name is :" << lname << "." << fname << endl;
}
void Person::Formalshow()const
{
	cout << "my name is :" << fname << "." << lname << endl;
}