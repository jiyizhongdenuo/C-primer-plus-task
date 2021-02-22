#pragma once
#ifndef _WINE_H
#define _WINE_H
#include<iostream>
#include<valarray>
#include<string>
using namespace std;
template<typename T1, typename T2>
class Pair
{
private:
	T1 years;
	T2 bottles;
public:
	Pair(const T1 & yr, const T2 & bo) :years(yr), bottles(bo) {}
	Pair() {}
	void Set(const T1 & yr, const T2 & bo);
	int Sum()const { return bottles.sum(); }
	void Show(int y)const;
};
template<typename T1, typename T2>
void Pair<T1, T2>::Set(const T1 & yr, const T2 & bo)
{
	years = yr;
	bottles = bo;
}
template<typename T1, typename T2>
void Pair<T1,T2>::Show(int y)const
{
	for (int i = 0; i < y; i++)
	{
		cout << "\t" << years[i] << "\t" << bottles[i] << endl;
	}
}
typedef std::valarray<int>Arrayint;//valarray在std名称空间里
typedef Pair<Arrayint, Arrayint>PairArray;
class Wine :private PairArray, private string//string在std名称空间里
{
	int yrs;
public:
	Wine(const char * l, int y, int yr[], int bo[]) :string(l), yrs(y), PairArray(Arrayint(yr, y), Arrayint(bo, y)) {}
	Wine(const char *l, int y) :string(l), yrs(y) {}
	Wine() {}
	void GetBottles();
	int sum() { return PairArray::Sum(); }
	string & Label() { return (string &)*this; }
	void Show()const { cout << "Wine: " << (string &)(*this) << endl;   cout << "\tYear\tBottles\n";   PairArray::Show(yrs); }
};
void Wine::GetBottles()
{
	Arrayint yt(yrs), bo(yrs);
	for (int i = 0; i < yrs; i++)
	{
		cout << "Enter the year: ";
		cin >> yt[i];
		cout << "Enter the bottles: ";
		cin >> bo[i];
	}
	while (cin.get() != '\n')
		continue;
	PairArray::Set(Arrayint(yt), Arrayint(bo));
}
#endif