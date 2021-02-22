#pragma once
#ifndef _STACK_H
#define _STACK_H
typedef unsigned long Item;
using namespace std;
class Stack
{
	enum { MAX = 10 };
	Item * pitems;
	int size;
	int top;
public:
	Stack(int n = MAX);
	Stack(const Stack & st);
	~Stack();
	bool isempty()const;
	bool isfull()const;
	bool push(const Item &item);
	bool pop(Item &item);
	Stack &operator=(const Stack &st);
	friend std::ostream & operator<<(std::ostream &os, const Stack & st)
	{
		os << "This Stack is:" << endl;
		int len = st.top - 1;
		while (len != -1)
		{
			cout << st.pitems[len] << endl;
			len--;
		}
		return os;
	}
};
#endif // !_STACK_H
