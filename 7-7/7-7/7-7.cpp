#include <iostream>
const int max = 5;
double * fill_array(double *, int);
void show_arrya(const double*, const double*);
void revalue(double, double*, double*);
int main()
{
	using namespace std;
	double properties[max];
	double * pt = fill_array(properties, max);
	show_arrya(properties, pt);
	if (pt != properties)
	{
		cout << "Enter revaluation factor:";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number:";
		}
		revalue(factor, properties, pt);
		show_arrya(properties, pt);
	}
	cout << "Done.";
	return 0;
}
double * fill_array(double  ar[], int limit)
{
	using namespace std;
	double temp;
	int i;//i需要在此处声明
	for (i = 0; i < limit; i++)
	{
		cout << "Enter value #" << i + 1 << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		ar[i] = temp;
	}
	return (ar + i);//已经指向数组最后一个值的后一个地址
}
void show_arrya(const double*ar, const double*ari)
{
	using namespace std;
	for (int i=0; ar != ari; ar++,i++)
	{
		cout << "Property #" << i + 1 << ": $";
		cout << *ar<<endl;
	}
}
void revalue(double r, double*ar, double*ari)
{
	for (; ar != ari; ar++)
		*ar *= r;
}