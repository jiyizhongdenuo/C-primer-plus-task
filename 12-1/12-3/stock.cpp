#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"stock.h"
using std::cout;
Stock::Stock()
{
	company = nullptr;
	shares = share_v = total_v = 0;
}
Stock::Stock(const char *s, long n, double pr )
{
	company = new char[strlen(s) + 1];
	strcpy(company, s);
	shares = n;
	share_v = pr;
	set_tot();
}
Stock::~Stock()
{
	delete[]company;
}
void Stock::buy(long num, double price)
{
	if (num < 0)
		cout << "try again.";
	else
	{
		shares += num;
		share_v = price;
		set_tot();
	}
	
}
void Stock::sell(long num, double price)
{

	if (num < 0)
		cout << "try again.";
	else if (num > share_v)
	{
		cout << "you can't sell more than you have.";
	}
	else
	{
		shares -= num;
		share_v = price;
		set_tot();
	}
}
void Stock::update(double price)
{
	share_v = price;
	set_tot();
}
std::ostream & operator<<(std::ostream &os, Stock & s)
{
	using std::ios_base;
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	cout << "Company: " << s.company << " Shares: " << s.shares << std::endl;
	cout << " Total Worth: $" << s.total_v << std::endl;
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
	return os;
}