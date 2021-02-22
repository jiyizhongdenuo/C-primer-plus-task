#pragma once
#ifndef _PORT_H
#define _PORT_H
#include<iostream>
using namespace std;
class Port
{
	char * brand;
	char style[20];
	int bottles;
public:
	Port(const char * br = "none", const char * st = "none", int b = 0);
	Port(const Port & p);
	virtual ~Port();
	Port &operator=(const Port & p);
	Port &operator+=(int b);
	Port &operator-=(int b);
	int Bottlecount()const { return bottles; }
	virtual void Show()const;
	friend ostream & operator<<(ostream & os, const Port & p);
};
class VintagePort :public Port
{
	char * nickname;
	int year;
public:
	VintagePort();
	VintagePort(const char *br, const char * st, int b, const char *nn, int y);
	VintagePort(const VintagePort & v);
	~VintagePort() { delete[] nickname; }
	VintagePort &operator=(const VintagePort & v);
	virtual void Show()const;
	friend ostream & operator<<(ostream & os, VintagePort & v);
};
#endif // !_PORT_H
