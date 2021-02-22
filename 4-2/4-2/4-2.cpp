#include<iostream>
#include<cstring>
int main(void)
{
	using namespace std;
	const int Nsize = 20;
	char name1[Nsize],name2[Nsize];
	cout << "Enter your first name:";
	cin.getline(name1, 20);
	cout << "Enter your last name: ";
	cin.getline(name2, 20);
	strncpy(name1, name2,Nsize);
	cout << "Here's the information in a single string: " << name1;
	return 0;
}