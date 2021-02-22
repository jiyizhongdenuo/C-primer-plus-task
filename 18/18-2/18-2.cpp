#include <iostream>
#include<utility>
#include"cpmv.h"
using namespace std;
int main()
{
	Cpmv one("one", "ONE");
	Cpmv two("two", "TWO");
	Cpmv three;
	one.Display();
	two.Display();
	three = one + two;
	three.Display();
	Cpmv four(two);
	four = move(three);
	four.Display();
	four = one;
	four.Display();
	return 0;
}
Cpmv::Cpmv()
{
	cout << "default constructor called."<<endl;
	pi = new Info;                                      //类对象只会创建存储指针的空间。
}
Cpmv::Cpmv(std::string q, std::string z)
{
	cout << "constructor called."<<endl;
	pi = new Info;
	pi->qcode = q;
	pi->zcode = z;
}
Cpmv::Cpmv(const Cpmv &cp)
{
	cout << "copy constructor called."<<endl;
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
}
Cpmv::Cpmv(Cpmv&& mv)
{
	cout << "copy move constructor called."<<endl;
	pi = mv.pi;
	mv.pi = nullptr;
}
Cpmv::~Cpmv() { cout <<"destructor called."<<endl; delete pi; }
Cpmv& Cpmv::operator=(const Cpmv&cp)
{
	cout << "= constructor called."<<endl;
	if (this == &cp)                    //忘了相等时侯。
		return *this;
	delete pi;
	pi = new Info;                     //都要清除重新赋值。
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	return *this;
}
Cpmv& Cpmv::operator=(Cpmv&&mv)
{
	cout << "= move constructor called."<<endl;
	if (this == &mv)
		return *this;
	delete pi;
	pi = mv.pi;
	mv.pi = nullptr;
	return *this;
}
Cpmv Cpmv::operator+(Cpmv&obj)const
{
	cout << "+ constructor called."<<endl;
	Cpmv temp;
	temp.pi->qcode = pi->qcode + obj.pi->qcode;
	temp.pi->zcode = pi->zcode + obj.pi->zcode;
	return temp;
}
void Cpmv::Display()const
{
	cout << "Qcode is: " << pi->qcode << "  " << "Zcode is: " << pi->zcode<<endl;
}