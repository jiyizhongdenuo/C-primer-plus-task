#include <iostream>
using namespace std;
const int slen = 30;
struct studen 
{
	char fullname[slen];
	char hobby[slen];
	int ooplevel;
};
int getinfo(studen * , int );
void display1(studen);
void display2(const studen *);
void display3(const studen pa[], int n);
int main()
{

	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	studen * ptr_stu = new studen[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[]ptr_stu;
	cout << "Done\n";
	return 0;
}
void display1(studen stu)
{

}

