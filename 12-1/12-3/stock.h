#pragma once
#ifndef _STOCK_H
#define _STOCK_H
#include<iostream>
class Stock
{
private:
	char * company;
	int shares;
	double share_v;
	double total_v;
	void set_tot() { total_v = share_v * shares; }
public:
	Stock();
	Stock(const char *s, long n = 0, double pr = 0.0);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	friend std::ostream & operator<<(std::ostream &os, Stock & s);
};
#endif // !_STOCK_H
