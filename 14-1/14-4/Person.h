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
	virtual void Set() = 0 { Get(); }//����LINK 2019��������ʧ��
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
class BadDude :public PokerPlayer, public Gunslinger//����δ����Get()����ʱ�򱨴���ΪBadDude�Ķ���ʹ��Get������ʱ��֪��ʹ�ü̳е�����������Ǹ�Get���������ⷽ��1.�ǲ���������Get������ʹ��protected������
	                                                //�̳��ڵ��á�2.�ڸú�����Ҳʹ��һ��Get��������ˣ�������õ�ʱ�� ��û�������ԡ������̳л�ѡȡ�����Getʹ�ã�Ҳ������������ԡ�Dateû��������BadDudeû������ӿ�
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
