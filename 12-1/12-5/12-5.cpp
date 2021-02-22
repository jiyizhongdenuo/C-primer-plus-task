#include <iostream>
#include"queue.h"
#include<cstdlib>
#include<ctime>
const int MIN_PET_HT=60;
bool newcustomer(double x);
int main()
{
	using namespace std;
	srand(time(0));
	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter maximum size of queue: ";
	int qs;
	cin >> qs;
	Queue line(qs);
	cout << "Enter the number of simulation hours: ";
	int hours;
	cin >> hours;
	cout << "Enter the average number of customers per hour: ";
	double perhour;
	cin >> perhour;
	long cyclelimit = MIN_PET_HT*hours;
	double min_per_cust;
	min_per_cust = MIN_PET_HT / perhour;
	Item temp;
	long turnaways = 0;
	long customers(0);
	long served(0);
	long sum_line(0);
	int wait_time(0);
	long line_wait(0);
	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))
		{
			if (line.isfull())
				turnaways++;
			else
			{
				customers++;
				temp.set(cycle);//新顾客等待时间。
				line.enqueue(temp);//添加顾客到达及等待时间信息
			}
		}
		if (wait_time <= 0 && !line.isempty())
		{
			line.dequeue(temp);
			wait_time = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0)
			wait_time--;
		sum_line += line.queuecount();
	}
	if (customers > 0)
	{
		cout << "customers accepted: " << customers << endl;
		cout << " customers served: " << served << endl;
		cout << " turnaways: " << turnaways << endl;
		cout << "average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)sum_line / cyclelimit << endl;
		cout << " average wait time: "
			<< (double)line_wait / served << " minutes\n";
	}
	else
		cout << "No customers!\n";
	cout << "Done!\n";
	// cin.get();
	// cin.get();
	return 0;
}
bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}