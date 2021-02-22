#include<iostream>
#include<array>
int main()
{
	using namespace std;
	array<double, 10>donation;
	double sum = 0,average;
	int i;
	for ( i = 0; i<10 &&(cin >> donation[i]) ; i++)
	{
		sum += donation[i];
	}
	average = sum / i;
	int f=0,n;
	for (n = 0; n < i; n++)
	{
		if (donation[n] > average)
			f++;
	}
	cout << "sum:\t" << sum << "average" << average << "f:\t" << f;
	return 0;
}