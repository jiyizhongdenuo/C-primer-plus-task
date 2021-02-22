#include<iostream>
using std::cout;
using std::cin;
using std::endl;
void mice(void)
{
	cout << "Three blind mice."<<endl;
}
void run(void)
{
	cout << "See how they run"<<endl;
}
int main(void)
{
	mice();
	mice();
	run();
	run();
	return 0;
}