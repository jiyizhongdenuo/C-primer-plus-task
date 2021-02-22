#pragma once
#include<iostream>
#include<stdexcept>
#include<string>
#include<cstdlib>
using namespace std;
class Sales
{
public:
	enum {MONTHS=12};
	class bad_index :public logic_error
	{
	private:
		int bi;
	public:
		explicit bad_index(int ix, const string &s = "Index error in Sales object\n"):logic_error(s),bi(ix){}//logic_errorππ‘Ï¥ÌŒÛ°£
		int bi_val() { return bi; }
		virtual ~bad_index()throw() {}
	};
	explicit Sales(int yy = 0);
	Sales(int yy, const double * gr, int n);
	virtual ~Sales() {}
	int Year()const { return year; }
	virtual double operator[](int i)const;
	virtual double & operator[](int i);
private:
	double gross[MONTHS];
	int year;
};
class LabeledSales : public Sales
{
	string label;
public:
	class nbad_index :public Sales::bad_index
	{
		string lbl;
	public:
		explicit nbad_index(const string &l, int ix, const string &s = "Index error in LabelledSales object\n") : bad_index(ix, s), lbl(l) {}
		const string & label_val()const { return lbl; }
		virtual ~nbad_index() {}
	};
	explicit LabeledSales(const string & l, int yy, const double * gr, int n) :label(l), Sales(yy, gr, n) {}
	explicit LabeledSales(const string & l, int y) :label(l), Sales(y) {}
	virtual ~LabeledSales() {}
	const string & Label()const { return label; }
	virtual double operator[](int i)const;
	virtual double & operator[](int i);
};
Sales::Sales(int yy)
{
	year = yy;
	for (int i = 0; i < MONTHS; i++)
		gross[i] = 0;
}
Sales::Sales(int yy, const double * gr, int n)
{
	year = yy;
	int lim = (n < MONTHS) ? n : MONTHS;
	int i;
	for ( i = 0; i < lim; i++)
		gross[i] = gr[i];
	for (; i < MONTHS; i++)
		gross[i] = 0;

}
double Sales::operator[](int i)const
{
	if (i < 0 || i >= MONTHS)
		throw bad_index(i);
	return gross[i];
}
double &Sales::operator[](int i)
{
	if (i < 0 || i >= MONTHS)
		throw bad_index(i);
	return gross[i];
}
double LabeledSales::operator[](int i)const
{
	if (i < 0 || i >= MONTHS)
		throw nbad_index(Label(), i);
	return Sales::operator[](i);
}
double & LabeledSales::operator[](int i)
{
	if (i < 0 || i >= MONTHS)
		throw nbad_index(Label(), i);
	return Sales::operator[](i);
}