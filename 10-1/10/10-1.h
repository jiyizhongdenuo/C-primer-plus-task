#pragma once
#include<iostream>
#include<string>
#ifndef _ACCOUNT__
#define _ACCOUNT__
class Account {
private:
	std::string name;
	std::string ac;
	double Cash;
public:
	Account();
	Account(std::string n, std::string a, double cash);
	void show() const;
	void get(double cash);
	void put(double cash);
	~Account()
	{
		std::cout << "hello\n";
	}
};


#endif