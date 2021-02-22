#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"cow.h"
Cow::Cow() 
{
	name[0] = '\0';
	hobby = nullptr;
	weight = 0;
}
Cow::Cow(const char * nm, const char * ho, double wt)
{
	strcpy_s(name, nm);
	int len = strlen(ho);
	hobby = new char[len + 1];
	strcpy(hobby, ho);
	weight = wt;
}
Cow::Cow(const Cow & c)
{
	strcpy_s(name, c.name);
	int len = strlen(c.hobby);
	hobby = new char[len + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}
Cow::~Cow()
{
	delete [] hobby;
}
Cow & Cow::operator=(const Cow & c)
{
	strcpy_s(name, c.name);
	int len = strlen(c.hobby);
	hobby = new char[len + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
	return *this;
}
void Cow::showcow()const
{
	using namespace std;
	cout << name << endl;
	cout << hobby << endl;
	cout << weight << endl;
}