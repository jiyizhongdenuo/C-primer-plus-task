#include <iostream>
using namespace std;
template<class T>
void showarray(const T *, int n);
template <class T>
void showarray(T * a[], int);
struct debts {
	char name[50];
	double amount;
};

int main()
{
	using namespace std;
	int things[6] = { 1,2,3,4,5,6 };
	debts mr_e[3] = {
		{"ima wolfe",2400.00},
	{"ura foxe",1300.0},
	{"iby stout",1800.0}
	};
	double *pd[3];
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_e->amount;
	cout << "Listing r.e's counts of tings:";
	showarray(things, 6);
	cout << "Listing mr.e's debts of total:";
	showarray(pd, 3);
	return 0;
}
template <class T>
void showarray(const T *arr, int n)
{
	T z=arr[0];
	for (int x = 1; x < n; x++)
	{
		z += arr[x];
	}
	cout << "total=: " << z << endl;
}
template <class T>
void showarray(T * a[], int n)
{
	T temp = *a[0];
	for (int i = 1; i < n; i++)
	{
		temp += *a[i];
	}
	cout << "debt's total= " << temp << endl;
}