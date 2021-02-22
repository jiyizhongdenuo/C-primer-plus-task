#pragma once
#ifndef _STRING_H
#define _STRING_H
#include<iostream>
using std::ostream;
using std::istream;
class String {
	char *str;
	int len;
	static int num_strings;
	static const int cinlim = 80;
public:
	String();
	String(const char * s);
	String(const String &);
	~String();
	int length()const { return len; };
	String &operator=(const String & s);
	String &operator=(const char*);
	void Stringlow();
	void Stringup();
	int cal(const char ch)const;
	char & operator[](int i);
	const char &operator[](int i)const;
	friend bool operator<(const String & st, const String &st2);
	friend bool operator>(const String & st, const String &st2);
	friend String operator+(const String & st, const String &st2);
	friend bool operator==(const String & st, const String &st2);
	friend ostream & operator<<(ostream & os, const String &st);
	friend istream & operator>>(istream & is, String &st);
	static int howmany();
};
#endif // !_STRING_H
