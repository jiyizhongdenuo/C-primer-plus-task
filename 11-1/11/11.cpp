#include<iostream>
#include"vector.h"
#include<cstdlib>
#include<ctime>
#include<fstream>
int main()
{
	using namespace std;
	using VECTOR::Vector;
	ofstream fout;
	fout.open("steps.txt");
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter target distance (q to quit):";
	while (cin >> target)
	{
		cout << "Enter step length:";
		if (!(cin >> dstep))
			break;
		fout << "Target Distance:" << target << ", Step Size: " << dstep << endl;
		fout << "0; (x,y) =(0,0)\n";
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
			fout << steps << ": " << result << endl;
		}
		cout << "After " << steps << " steps, the subject has the following location:\n";
		cout << result << endl;
		fout << "After " << steps << " steps, the subject has the following location:\n";
		fout << result << endl;
		result.polar_mode();
		cout << "or\n" << result << endl;
		cout << "Average outward distance per step = " << result.magval() / steps << endl;
		fout << "or\n" << result << endl;
		fout << "Average outward distance per step = " << result.magval() / steps << endl;
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