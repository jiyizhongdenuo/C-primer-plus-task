#pragma once
#ifndef _LIST
#define _LIST
struct film {
	char t[50];
	int m;
};
typedef struct film item;
class List
{
private:
	static const int v = 10;//static��const��������������
	item it[v];
	int count;
public:
	List();
	void push(item & im);
	bool isempty();
	bool isfull();
	void showlist();
};

#endif