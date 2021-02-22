#define _CRT_SECURE_NO_WARNINGS
#include"port.h"

Port::Port(const char * br , const char * st, int b )
{
	brand = new char[strlen(br) + 1];
	strcpy(brand, br);
	strncpy(style, st, 19);
	style[19] = '\0';
	bottles = b;
}
Port::Port(const Port & p)
{
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strncpy(style, p.style, 19);
	style[19] = '\0';
	bottles = p.bottles;
}
Port::~Port()
{
	delete[] brand;
}
Port &Port::operator=(const Port & p)
{
	if (this == &p)
		return *this;
	delete[] brand;
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strncpy(style, p.style, 19);
	style[19] = '\0';
	bottles = p.bottles;
	return *this;
}
Port &Port::operator+=(int b)
{
	bottles += b;
	return *this;
}
Port &Port::operator-=(int b)
{
	bottles -= b;
	return *this;
}
void Port::Show()const
{
	cout << "Brand: " << brand << endl;
	cout << "Kind: " << style << endl;
	cout << "Bottles: " << bottles << endl;
}
ostream & operator<<(ostream & os, const Port & p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles << endl;
	return os;
}
VintagePort::VintagePort():Port()
{
	nickname = new char[1];
	nickname[0] = '\0';
	year = 0;
}
VintagePort::VintagePort(const char *br,const char * st , int b, const char *nn, int y):Port(br,st,b )
{
	nickname = new char[strlen(nn)+1];
	strcpy(nickname, nn);
	year = y;
}
VintagePort::VintagePort(const VintagePort & v):Port(v)
{
	nickname = new char[strlen(v.nickname) + 1];
	strcpy(nickname, v.nickname);
	year = v.year;
}
VintagePort &VintagePort::operator=(const VintagePort & v)
{
	if (this == &v)
		return *this;
	delete[]nickname;
	Port::operator=(v);
	nickname = new char[strlen(v.nickname) + 1];
	strcpy(nickname, v.nickname);
	year = v.year;
}
void VintagePort::Show()const
{
	Port::Show();
	cout << "nickname: " << nickname << endl;
	cout << "year: " << year << endl;
}
ostream & operator<<(ostream & os, VintagePort & v)
{
	os << (const Port &)v;
	os << v.nickname << ", " << v.year << endl;
	return os;
}