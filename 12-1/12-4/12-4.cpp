#include <iostream>
#include<cctype>
#include"stack.h"
int main()
{
	Stack s;
	Item it[20] = { 0 };
	for (int i = 0; i < 11; i++)
	{
		it[i] = i + 1;
		s.push(it[i]);
	}
	std::cout << s;
	Stack s1(s);
	std::cout << "s1=" << s1;
	Stack s2 = s;
	std::cout << s;
}

