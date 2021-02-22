#pragma once
#ifndef _MEAN_H
#define _MEAN_H
#include<stdexcept>
#include<iostream>
#include<string>
#include<cmath>
using std::string;
using std::cout;
using std::cin;
using std::endl;
class bad_hmean :public std::logic_error
{
	string name;
public:
	double v1;
	double v2;
	explicit bad_hmean(double v1 = 0, double v2 = 0,  const string &s = "Error in hmean()\n");
	void mesg() {  cout << name<<"  v1= " << v1 << ", v2= " << v2 <<" arguments a=-b should be div a+b=0!\n";  }
	virtual ~bad_hmean() {}//未必需要异常规范throw();
};
bad_hmean::bad_hmean(double v1, double v2,  const string &s) :v1(v1), v2(v2), logic_error(s) { name = "bad_hmean"; }
class bad_gmean : public bad_hmean
{
	string name;
public:
	explicit bad_gmean(double v1 = 0, double v2 = 0, const string &s = "Error in hmean()\n");
	void mesg() { cout << what() << endl; cout << name << "  v1= " << v1 << ", v2= " << v2 << " arguments should be >= 0\n"; }
	virtual ~bad_gmean() {}
};
bad_gmean::bad_gmean(double v1, double v2, const string &s) :bad_hmean(v1, v2, s)
{
	name = "gmean";
}
#endif // !_MEAN_H
