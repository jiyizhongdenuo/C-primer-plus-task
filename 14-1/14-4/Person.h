#pragma once
#ifndef _PERSON_H
#define _PERSON_H
#include<iostream>
#include<string>
using namespace std;
class Person
{
	string firstname;
	string nextname;
public:
	Person():firstname("noname"),nextname("noname"){}
	Person(const char * f,const char * n):firstname(f),nextname(n){}
	Person(const Person & p) { firstname = p.firstname; nextname = p.nextname; }
	virtual void Show()const = 0 { cout << "name:" << firstname << " " << nextname<<endl; }
	virtual ~Person(){}
	virtual void Set() = 0 { Get(); }//错误LINK 2019函数连接失败
	virtual void Get()=0;
};
class Gunslinger:virtual public Person
{
private:
	int num;
public:
	void Data()const;
	virtual void Get();
	double Draw()const;
	void Show()const;
	void Set();
	Gunslinger() :Person(), num(0) {}
	Gunslinger(const char * f, const char * n, int nu) :Person(f, n), num(nu) {}
	Gunslinger(const Person & p, int n) :Person(p), num(n) {}
	virtual ~Gunslinger() {}

};
class PokerPlayer :virtual public Person
{
public:
	void Data()const;
	virtual void Get();
	void Show()const;
	void Set() { Person::Set(); }
	int Draw()const;
	PokerPlayer() :Person() {}
	PokerPlayer(const char * f, const char * n) :Person(f, n) {}
	PokerPlayer(const Person & p):Person(p) {}
	virtual ~PokerPlayer() {}
};
class BadDude :public PokerPlayer, public Gunslinger//该类未声明Get()函数时候报错。因为BadDude的对象使用Get函数的时候不知道使用继承的两个基类的那个Get函数。避免方法1.是不允许对象调Get函数，使用protected仅允许
	                                                //继承内调用。2.在该函数内也使用一个Get函数。如此，对象调用的时候， 就没有歧义性。单链继承会选取最近的Get使用，也不会造成歧义性。Date没有问题是BadDude没有这个接口
{
public:
	virtual void Get();
	double Gdraw()const;
	int Cdraw()const;
	void Show()const;
	void Set();
	void Data()const;
	BadDude() {}
	BadDude(const char * f, const char * n, int nu) :Person(f, n), Gunslinger(f, n, nu), PokerPlayer(f, n) {}
	BadDude(const Person & p, int n) :Person(p), Gunslinger(p, n), PokerPlayer(p) {}
	BadDude(const Gunslinger & p) :Person(p), Gunslinger(p), PokerPlayer(p) {}
	BadDude(const PokerPlayer & p, int n) :Person(p), Gunslinger(p, n), PokerPlayer(p) {}
};

#endif // !_PERSON_H
