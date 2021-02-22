
#include <iostream>
template <class T,class ...Args>
long double sum_value(T value, Args ...args);
template<class T>
void sum_value(T value);
static long double sum_v = 0;
int main()
{
	sum_value('A', 10, 11.35, 456);
	std::cout << sum_v << std::endl;
}
template <class T, class ...Args>
long double sum_value(T value, Args ...args)
{
	sum_v += value;
	sum_value(args...);
	return sum_v;
}
template<class T>
void sum_value(T value)
{
	sum_v += value;
}