#include<iostream>
#include<array>
int main(void)
{
	using namespace std;
	array<long double, 21>factorials ;//(100!需要101个位)
	factorials[0] = factorials[1] = 1LL;
	for (int i = 2; i < 20; i++)

		factorials[i] = factorials[i - 1] *i;
	for (int i = 1; i < 20; i++)
		cout <<i<<"!="<< factorials[i] << endl;
	return 0;
}