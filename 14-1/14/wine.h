#pragma once
#ifndef _WINE_H
#define _WINE_H
#include<iostream>
#include<valarray>
#include<string>
using std::string;
using std::cout;
using std::endl;
using std::cin;
template <class T1,class T2>
class Pair
{
private:
	T1 years;
	T2 bottles;
public:
	Pair(const T1 & y, const T2 &b):bottles(b), years(y){}
	Pair(){}
	void Show(int y)const;
	int  Sum()const { return bottles.sum(); }//“return”: 无法从“_Ty”转换为“int &” 
	void Set(const T1& ys, const T2 & bo);
};
template <class T1, class T2>
void Pair<T1, T2>::Show(int y)const
{
	for (int i = 0; i < y; i++)
	{
		cout << "\t"<<years[i] << "\t" << bottles[i] << endl;
	}
}
template<class T1,class T2>
void Pair<T1, T2>::Set(const T1 & ys, const T2 & bo)
{
	years = ys;
	bottles = bo;
}
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;
class Wine
{
private:
	string wname;
	PairArray yab;
	int yrs;
public:
	Wine(const char * l, int y, const int yr[], const int bot[]) :wname(l), yrs(y) { yab.Set(ArrayInt(yr, yrs), ArrayInt(bot, yrs)); }//不能直接初始化valarray数组,没有转换函数。//valarray需要一个
	Wine(const char* l, int y) :wname(l), yrs(y){}
	void Getbottls();
	void Show()const;
	string & Label() { return wname; }//不应该用const
	int sum() { return yab.Sum(); }
};
void Wine::Getbottls()
{
	ArrayInt yr(yrs), bt(yrs);//int year1[yrs]; int bottle1[yrs];报错：this不能再常量表达式中使用。
	for (int i = 0; i < yrs; i++)
	{
		cout << "Enter year: ";
		(cin >> yr[i]).get();
		cout << "Enter bottles for that year: ";
		cin >> bt[i];
	}
	yab.Set(ArrayInt(yr), ArrayInt(bt));//上面已经设置yr，此处使用复制构造函数.不是复制构造，是转换函数。
}
void Wine::Show()const
{
	cout << "Wine: " << wname << endl;
	cout << "\tYear\tBottles\n";
	yab.Show(yrs);
}

#endif // !_WINE_H
