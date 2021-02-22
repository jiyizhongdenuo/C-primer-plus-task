#include<cstdlib>
#include"vector.h"
#include<iostream>
#include<ctime>
int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	Vector step;
	Vector result;
	double direction;
	long steps = 0;
	double target;
	double dstep;
	long maxsteps=0,minsteps= 214748364,total=0;//minsteps开始就超过最大值导致负数了。
	int N = 0;
	cout << "Enter target distance (q to quit):";
	while (cin >> target)
	{
		long temp = 0;
		cout << "Enter step length:";
		if (!(cin >> dstep))
			break;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		temp = steps;
		if (maxsteps < temp)
			maxsteps = temp;
		if (minsteps > temp)
			minsteps = temp;
		total += temp;
		N++;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit):";
	}
	double aversteps = double(total) / double(N);
	cout << "maxsteps = " << maxsteps << " , minsteps = " << minsteps << endl;
	cout << "totalsteps = " << total << " , average steps = " << aversteps << endl;
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}