#pragma once
#ifndef MEAN_H
#define MEAN_H
#include<iostream>
#include<stdexcept>
#include<string>
using namespace std;
class bad_hmean:public logic_error 
{
private:
	string name;
public:
	explicit bad_hmean(const string &n = "hmean", const string & s = "Error in hmean()\n");
	string mesg() { return "hmean() arguments a=-b should be div a+b=0"; }
	virtual ~bad_hmean()throw(){}
};
bad_hmean::bad_hmean(const string & n, const string & s):name(n),logic_error(s){}
class bad_gmean :public logic_error
{
private:
	string name;
public:
	explicit bad_gmean(const string &n="gmean",const string &e="Error in gmean()\n"):name(n),logic_error(e){}
	string mesg() { return "gmean()arguments should be>=0\n"; }
	virtual ~bad_gmean() {}
};
#endif // !MEAN_H
