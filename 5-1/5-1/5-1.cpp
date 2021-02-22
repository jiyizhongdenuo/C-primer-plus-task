#include<iostream>
int main(void)
{
	using std::cout;
	using std::cin;
	int lowerl, upperl,sum;
	cout << "Enter two number of lower and upper limit;";
	cin >> lowerl;
	cin >> upperl;
	lowerl += 1;
	for(sum=0;lowerl<upperl;++lowerl)
	{ 
		sum += lowerl;
	};
	cout << sum;
	return 0;
}