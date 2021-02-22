#define _CRT_SECURE_NO_WARNINGS
#include"classic.h"
#include<iostream>
Cd::Cd(const char * s1, const char * s2, int n, double x)
{
	performers = new char[strlen(s1)+1];//用错（） 导致new建立一个单字符的动态存储空间
	label = new char[strlen(s2)+1];
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd & d)
{
	performers = new char(strlen(d.performers));
	label = new char(strlen(d.label));
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd()
{
	performers = nullptr;
	label = nullptr;
	selections = 0;
	playtime = 0;
}
Cd::~Cd()
{
	delete [] performers;
	delete [] label;
}
void Cd::Report()const
{
	using std::cout;
	cout << performers << ", " << label << ", " << selections << "," << playtime;
}
Classic::Classic() :Cd()
{
	CD=nullptr;
}
Classic::Classic(const char * s1, const char *s2, int n, double x, const char *s3) : Cd(s1, s2, n, x)
{
	CD = new char[strlen(s3)+1];
	strcpy(CD, s3);
}
Classic::Classic(Cd & d, const char * s3) : Cd(d)
{
	CD = new char(strlen(s3));
	strcpy(CD, s3);
}
void Classic::Report()const
{
	Cd::Report();
	std::cout << ", " << CD << "\n";
}
Classic::~Classic()
{
	Cd::~Cd();
	delete [] CD;
}
//赋值构造函数没有完成