#include"10-7.h"
#include<iostream>
#include<cstring>
Plorg::Plorg()
{
	strcpy_s(plorg, "Plorga");
	ci = 0;
}
Plorg::Plorg(const char name[20], int n)
{
	strcpy_s(plorg, name);
	ci = n;
}
void Plorg::showplorg() const
{
	std::cout << "p's name is " << plorg << "\nci is " << ci<<std::endl;
}
void Plorg::setci(int n)
{
	ci = n;
}