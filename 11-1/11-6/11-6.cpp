#include <iostream>
#include"stonewt.h"
int main()
{
	using std::cout;
	using std::endl;
	using std::cin;
	Stonewt temp(11.0);
	Stonewt arrays[6] = { (300),(260),(180) };
	for (int i = 3; i < 6; i++)//忘了数组从0开始。
	{
		cout << "Enter "<<i+1<<" stones value (q to quit):";
		double temp ;
		if(cin >> temp)
			arrays[i] = temp;//赋值符号被重载了。
	}
	for (int i = 0; i < 6; i++)
		cout << "#" << i << ": " << arrays[i];
	int count = 0;
	Stonewt Min = arrays[0];
	Stonewt Max = arrays[0];
	for (int i = 0; i < 6; i++)
	{
		if (Min > arrays[i])
			Min = arrays[i];
		if (Max < arrays[i])
			Max = arrays[i];
		if (temp >= arrays[i])
			count++;
	}
	cout << "The Min pounds: " << Min;
	cout << "The Max pounds: " << Max;
	cout << "The numbers not under 11 pounds: " << count;
	cin.get();
	cin.get();
	return 0;
}
