#include"10-5.h"
#include<iostream>
Stack::Stack()
{
	top = 0;
}
bool Stack::isempty()const
{
	return top==0;
}
bool Stack::isfull()const
{
	return top == MAX;
}
bool Stack::push(const Item & item)
{
	if (top < MAX) {
		items[top++] = item;
		return true;
	}
	else
		return false;
}
bool Stack::pop(Item &item)
{
	static double total=0;//�����治�ܴ�������������Ϊ��Ч����Ҫ���԰ѱ������������ݻ�����main�����������������
	if (top > 0)
	{
		total += items[top--].payment;
		std::cout << "new total is " << total << std::endl;
		return true;
	}
	else
		return false;
}