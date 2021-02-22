#include <iostream>
void Fill_array(double*, int);
void Show_array(double*, int);
void Reverse_array(double*,int);//传递动态存储空间end之后的地址是不允许访问的，因此不能将地址相同作为判断条件。
int main()
{
	using namespace std;
	int n;
	cout << "Enter the number of array: ";
	cin >> n;
	double * value=new double[n];
	Fill_array(value, n);
	Show_array(value, n);
	Reverse_array(value, n);
	Show_array(value, n);
	Reverse_array(value + 1, n-1);
	Show_array(value, n);
	delete[]value;
	return 0;
}
void Fill_array(double*value, int num)
{
	for (int n = 0; n < num; n++) 
	{
		std::cout << "Enter value:";
		std::cin >> value[n];
	}
}
void Show_array(double*value , int num)
{
	for (int n = 0; n < num; n++)
	{
		std::cout<<"\nthe "<<n<<" value is :"<<value[n];
	}
}
void Reverse_array(double*start, int num)
{
	double temp;
	for (int i = 0,j=num-1; i< j; i++,j--)
	{
		temp = start[i];
		start[i] = start[j];
		start[j] = temp;
	}
}