#include <iostream>
using namespace std;
#include<cstring>
struct stringy {
	char *str;
	int ct;
};
void set(stringy &,const char *);
void show(const char*, int i = 1);
void show(const stringy &, int i = 1);
int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany,2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}
void set(stringy & a, const char * c)
{
	a.ct = strlen(c);
	a.str=new char[a.ct+1];
	strcpy(a.str, c);
}
void show(const char *ch, int i)
{
	for (int n = 0; n < i; n++)
	{
		cout << ch[n];
	}
	cout << endl;
}
void show(const stringy& ch, int z)
{
	for (int n = 0; n < z; n++ )
	{
		cout << ch.str[n];
	}
	cout << endl;
}