#pragma once
#ifndef _CPMV_H
#define _CPMV_H
#include<iostream>
#include<string>
class Cpmv
{
public:
	struct Info {
		std::string qcode;
		std::string zcode;
	};
private:
	Info *pi;
public:
	Cpmv();
	Cpmv(std::string q, std::string z);
	Cpmv(const Cpmv &cp);
	Cpmv(Cpmv&& mv);
	~Cpmv();
	Cpmv& operator=(const Cpmv&cp);
	Cpmv& operator=(Cpmv&&mv);
	Cpmv operator+(Cpmv&obj)const;
	void Display()const;
};
#endif // !_CPMV_H
