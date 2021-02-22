#include <iostream>
#include<cstring>
template <typename T1, typename T2>
T1 maxn(T1 *, T2);
template <>const char* maxn(const char *ar[], int);
int main()
{
	using namespace std;
	int num[6] = { 5,6,4,3,2,1 };
	double val[4] = { 1.1,3.2,4.2,6.4 };
	cout<<maxn(num, 5)<<endl;
	cout<<maxn(val, 3)<<endl;
	const char * ch[3] = {
		"abc",
		"efgasd",
		"hizs"
	};
	cout<<maxn(ch, 3);
	return 0;
}
template <typename T1, typename T2>
T1 maxn(T1 * number, T2 n)
{
	T1 v=number[0];
	for (int i = 1; i < n; i++)
	{
		v = number[i] > number[i - 1] ? number[i] : number[i - 1];
	}
	return v;
}
template <>const char * maxn(const char * zh[], int n)
{
	const char *c = zh[0];
	for (int i = 1; i < n; i++)
	{
		if (strlen(zh[i]) > strlen(zh[i - 1]))
			c = zh[i];
		return c;
	}
	
}
