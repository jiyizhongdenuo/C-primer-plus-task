#include<iostream>
int main(void)
{
	using namespace std;
	int sum = 0,i;
	cout << "Enter a number .";
	cin >> i;
	while (i != 0)
	{
		sum += i;
		cin >> i;
	}
	cout << "there number sum is:" << sum << endl;
	return 0;
}