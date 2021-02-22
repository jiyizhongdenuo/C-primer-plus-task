#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"string.h"
#include<cctype>
using std::cin;
using std::cout;
int String::num_strings = 0;
String::String()
{
	str = new char[1];
	str[0] = '\0';
	len = 0;
	num_strings++;
}
String::String(const char * s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	num_strings++;
}
String::String(const String & s)
{
	len = s.len;
	str = new char[len + 1];
	strcpy(str, s.str);
	num_strings++;
}
String::~String()
{
	num_strings--;
	delete[] str;
}
String &String::operator=(const String & s)
{
	if (this == &s)
		return *this;
	delete[] str;
	len = s.len;
	str = new char[len + 1];
	strcpy(str, s.str);
	return *this;
}
String &String::operator=(const char * s)
{
	delete[] str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	return *this;
}
void String::Stringlow()
{
	for (int i = 0; i < len; i++)
	{
		str[i] = (char)tolower(str[i]);//tolower(*str++)Ê¹ÓÃÊ§°Ü£»
	}
}
void String::Stringup()
{
	for (int i = 0; i < len; i++)
	{
		str[i] = (char)toupper(str[i]);
	}
}
int String::cal(const char ch)const
{
	int i=0;
	int n = 0;
	for (; i < len; i++)
	{
		if (ch ==str[i] )
			n++;
	}
	return n;
}
char & String::operator[](int i)
{
	return str[i];
}
const char & String::operator[](int i)const
{
	return str[i];
}
bool operator<(const String & st, const String &st2)
{
	return (strcmp(st.str, st2.str) < 0);
}
bool operator>(const String & st, const String &st2)
{
	return (strcmp(st.str, st2.str) > 0);
}
bool operator==(const String & st, const String &st2)
{
	return (strcmp(st.str, st2.str) == 0);
}
String operator+(const String & st, const String &st2)
{
	String temp;
	temp.len = st.len + st2.len;
	temp.str = new char[temp.len + 1];
	strcpy(temp.str, st.str);
	strcat(temp.str, st2.str);
	return temp;
}
ostream & operator<<(ostream & os, const String &st)
{
	os << st.str;
	return os;
}
istream & operator>>(istream & is,String &st)
{
	char temp[String::cinlim];
	is.get(temp, String::cinlim);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}
int String::howmany()
{
	return num_strings;
}