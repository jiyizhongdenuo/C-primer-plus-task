#include <iostream>
#include<iomanip>
int main()
{
	using namespace std;
	char al[100];
	cin.get(al, 100, '$');
	cout << cin.gcount()<<" :"<<setw(25)<<al << endl;
	//cin.putback(ch);
	return 0;
}
