#include<iostream>
#include<ctime>
int main(void)
{
	using namespace std;
	int n,time;
	clock_t secs;
	cout << "Enter number of rows: ";
	cin >> n;
	cout << "Enter the delay time: ";
	cin >> time;
	secs = time * CLOCKS_PER_SEC;
	for (int cow=0; cow < n; cow++)
	{
		clock_t stay = clock();
		for (int z=cow+1; z < n; z++)//行数与打印数相关联，后续走向不同，而再从新点又一样，就创建一个副本。
		{
			cout << ".";
		}
		for (int x = 0; x < cow+1; x++)
			cout << "*";
		cout << endl;
		while (clock()-stay < secs);

	}
	return 0;

}