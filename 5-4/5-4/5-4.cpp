#include<iostream>
int main(void)
{
	using namespace std;
	int Cleo=100,Daphne=100;
	int i=1;
	Cleo *= 1.05;
	Daphne += 10;
	while (Cleo < Daphne)
	{
		Cleo *= 1.05;
		Daphne += 10;
		i++;
	}
	cout << i;
	return 0;

}