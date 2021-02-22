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
	int  Sum()const { return bottles.sum(); }//��return��: �޷��ӡ�_Ty��ת��Ϊ��int &�� 
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
	Wine(const char * l, int y, const int yr[], const int bot[]) :wname(l), yrs(y) { yab.Set(ArrayInt(yr, yrs), ArrayInt(bot, yrs)); }//����ֱ�ӳ�ʼ��valarray����,û��ת��������//valarray��Ҫһ��
	Wine(const char* l, int y) :wname(l), yrs(y){}
	void Getbottls();
	void Show()const;
	string & Label() { return wname; }//��Ӧ����const
	int sum() { return yab.Sum(); }
};
void Wine::Getbottls()
{
	ArrayInt yr(yrs), bt(yrs);//int year1[yrs]; int bottle1[yrs];����this�����ٳ������ʽ��ʹ�á�
	for (int i = 0; i < yrs; i++)
	{
		cout << "Enter year: ";
		(cin >> yr[i]).get();
		cout << "Enter bottles for that year: ";
		cin >> bt[i];
	}
	yab.Set(ArrayInt(yr), ArrayInt(bt));//�����Ѿ�����yr���˴�ʹ�ø��ƹ��캯��.���Ǹ��ƹ��죬��ת��������
}
void Wine::Show()const
{
	cout << "Wine: " << wname << endl;
	cout << "\tYear\tBottles\n";
	yab.Show(yrs);
}

#endif // !_WINE_H
