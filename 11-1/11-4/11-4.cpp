#include<iostream>
#include"mytime.h"
int main()
{
	using std::cout;
	using std::endl;
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;
	cout << "Aida and Tosca:\n";
	cout << aida << "; " << tosca << endl;
	temp = aida + tosca;
	cout << "Aida+Toscaa: " << temp << endl;
	temp = 1.17*aida ;
	cout << "1.17*aida: " << temp << endl;
	cout << "10.0 * Tosca:" << 10.0*tosca << endl;
	return 0;
}