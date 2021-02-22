#ifndef WINEC_H_
#define WINEC_H_
#include <iostream>
#include <string>
#include <valarray>
using namespace std;
template<class T1, class T2>
class Pair
{
private:
	T1 year;
	T2 bottles;
public:
	Pair(const T1 &yr, const T2 &bt) :year(yr), bottles(bt) {}
	Pair() {}
	void Set(const T1 &yr, const T2 &bt);
	int Sum()const;
	void Show(int y)const;
};
template<class T1, class T2>
void Pair<T1, T2>::Set(const T1 &yr, const T2 &bt)
{
	year = yr;
	bottles = bt;
}
template<class T1, class T2>
int Pair<T1, T2>::Sum()const
{
	returnbottles.sum();
}
template<class T1, class T2>
void Pair<T1, T2>::Show(int y)const
{
	for (inti = 0; i < y; i++)
		cout << "\t" << year[i] << "\t" << bottles[i] << endl;
}
typedef valarray<int>ArrayInt;
typedef Pair<ArrayInt, ArrayInt>PairArray;
class Wine
{
private:
	PairArray yb;
	string fullname;
	int yrs;
public:
	Wine() {}
	Wine(const char *l, int y, const int yr[], const int bot[]);
	Wine(const char *l, int y);
	void GetBottles();
	string&Label();
	void Show()const;
	int sum()const;
};
#endif
//winec.cpp
Wine::Wine(const char *l, int y, const int yr[], const int bot[])
{
	fullname = l;
	yrs = y;
	yb.Set(ArrayInt(yr, yrs), ArrayInt(bot, yrs));
}
Wine::Wine(const char *l, int y)
{
	fullname = l;
	yrs = y;
}
void Wine::GetBottles()
{
	ArrayInt yr(yrs), bt(yrs);
	for (int i = 0; i < yrs; i++)
	{
		cout << "Enter the year: ";
		cin >> yr[i];
		cout << "Enter the bottles: ";
		cin >> bt[i];
	}
	while (cin.get() != '\n')
		continue;
	yb.Set(yr, bt);
}
string&Wine::Label()
{
	return fullname;
}
void Wine::Show()const
{
	cout << "Wine: " << fullname << endl;
	cout << "\tYear\tBottles\n";
	yb.Show(yrs);
}
int Wine::sum()const
{
	return yb.Sum();
}