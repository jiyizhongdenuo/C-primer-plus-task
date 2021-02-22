#include<iostream>
#include"½á¹¹.h"
int main()
{
	int n[200];
	chaff * cha = new (n) chaff[3];
	set(cha);
	show(cha);
	return 0;
}