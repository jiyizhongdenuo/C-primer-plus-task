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
	
	William liam;
	getline( cin,liam.name);
	cin >> liam.diameter;
	cin >> liam.weiget;
	cout << liam.name << endl<< liam.diameter<<endl<< liam.weiget;
	return 0;
		
}