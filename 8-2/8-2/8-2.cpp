#include <iostream>
#include<string>
struct Candybar
{
	std::string cname;//string需要前面加名称空间std；char xx[x]不允许创建后赋值，只能输入get（）或者初始化赋值；
	double weight;
	int heat;
};
void fillC(Candybar &, const char *, double, int);
void showC(Candybar &);
int main()
{
	using namespace std;
	Candybar candy;
	const char *name = "Millennium Munch";
	double we = 2.85;
	int he = 350;
	fillC(candy, name, we, he);//不允许传递未初始化的结构成员；
	showC(candy);
	return 0;
}
void fillC(Candybar & cb, const char * name, double we, int he)
{
	cb.cname = name;
	cb.weight = we;
	cb.heat = he;

}
void showC(Candybar & cy)
{
	using namespace std;
	cout << "bar name is:" << cy.cname << endl;
	cout << "bar weight is:" << cy.weight << endl;
	cout << "bar heat is: " << cy.heat << endl;
}
