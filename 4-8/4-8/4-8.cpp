#include<iostream>
#include<string>
using namespace std;
struct William {
	string name;
	double diameter;
	int weiget;
};
int main(void)
{

	William *pd = new William;
	getline(cin,  pd->name);
	cin >> pd->diameter;
	cin >> pd->weiget;
	cout << pd->name << endl << (*pd).diameter << endl << pd->weiget;
	return 0;

}