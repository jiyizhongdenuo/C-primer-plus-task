#include<iostream>
#include"10-1.h"
using std::cout;
using std::string;
using std::cin;
using std::endl;
Account::Account(std::string n, std::string a, double cash)
{
	name = n;
	ac = a;
	Cash = cash;
}
Account::Account()
{
	name = "no name";
	ac = "0";
	Cash = 0;
}
void Account::show()const
{
	cout << "The " << name <<"/"<<ac<< "'s cash have: " << Cash<<endl;
}
void Account::get(double cash)
{
	Cash += cash;
}
void Account::put(double cash)
{
	Cash -= cash;
}