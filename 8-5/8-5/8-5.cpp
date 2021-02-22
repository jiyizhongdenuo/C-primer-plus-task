#include <iostream>
template <class T>
T max5(T *);
int main()
{
	int in[5] = { 0,3,2,1,6 };
	double db[5] = { 1.1,2.2,3.3,4.4,5.5 };
	std::cout<<max5(in) << "\t" << sizeof(in) <<std::endl;
	std::cout << max5(db)<<std::endl;
	return 0;
}
template <class T>
T max5(T * a)
{
	int m = sizeof(a); //此处返回地址长度
	//std::cout << m;
	T max;
	max = a[0];
	for (int n = 1; n < 5; n++)
	{
		if (max < a[n])
			max = a[n];
		//max = max > a[n] ? max : a[n];
	}
	return max;
}
