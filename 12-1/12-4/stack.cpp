#include<iostream>
#include"stack.h"
using std::cout;
Stack::Stack(int n)
{
	size = n;
	pitems = new Item[size];
	top = 0;
}
Stack::Stack(const Stack & st)
{
	size = st.size;
	pitems = new Item[size];
	top = st.top;
	for (int i = 0; i < top; i++)
	{
		pitems[i] = st.pitems[i];
	}
}
Stack::~Stack()
{
	delete[] pitems;
}
bool Stack::isempty()const
{
	return (top == 0);
}
bool Stack::isfull()const
{
	return (top == 10);
}
bool Stack::push(const Item &item)
{
	if (top < MAX)
	{
		pitems[top++] = item;//赋值结束是个序号点
		return true;
	}
	else
	{
		cout << "error! Stack is full!" << std::endl;
		return false;
	}
}
bool Stack::pop(Item &item)
{
	if (top > 0)
	{
		item = pitems[--top];
		return true;
	}
	else
		return false;
}
Stack &Stack::operator=(const Stack &st)
{
	delete [] pitems;
	size = st.size;
	pitems = new Item[size];
	top = st.top;
	for (int i = 0; i < top; i++)
	{
		pitems[i] = st.pitems[i];
	}
	return *this;
}