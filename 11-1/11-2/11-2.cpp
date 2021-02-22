#include<iostream>
#include<cstdlib>
#include<ctime>
#include"vector.h"
int main()
{
	double Lag = 45 / atan(1.0);
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	Vector step;
	Vector result(0.0, 0.0);
	long steps = 0;
	double target;
	double dstep;
	double direction;
	double xx, yy;
	cout << "Enter target distance (q to quit):";
	while (cin >> target)
	{
		cout << "Enter step length:";
		if (!(cin >> dstep))
			break;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			xx = dstep * cos(direction/Lag);
			yy = dstep * sin(direction / Lag);
			step.reset(xx, yy);
			result = result + step;
			steps++;
		}
		cout << "After " << steps << " steps, the subject has the following location:\n";
		cout << result << endl;
		cout << "or\n" << "(m,a) = (" << result.magval() << "," << result.angval()<< ")" << endl;
		cout << "Average outward distance per step = " << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit):";
	}
	cout << "Bye!";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}