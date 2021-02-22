#include"classic.h"
#include<iostream>
Cd::Cd(const char * s1, const char * s2, int n, double x)
{
	strcpy_s(performers, s1);
	strcpy_s(label, s2);
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd & d)
{
	strcpy_s(performers, d.performers);
	strcpy_s(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd()
{
	strcpy_s(performers, "noname");
	strcpy_s(label, "no");
	selections = 0;
	playtime = 0;
}
void Cd::Report()const
{
	using std::cout;
	cout << performers << ", " << label << ", " << selections << "," << playtime ;
}
Classic::Classic():Cd()
{
	strcpy_s(CD,"no");
}
Classic::Classic(const char * s1, const char *s2, int n, double x, const char *s3):Cd(s1,s2,n,x)
{
	strcpy_s(CD, s3);
}
Classic::Classic(Cd & d, const char * s3):Cd(d)
{
	strcpy_s(CD, s3);
}
void Classic::Report()const
{
	Cd::Report();
	std::cout << ", " << CD<<"\n";
}