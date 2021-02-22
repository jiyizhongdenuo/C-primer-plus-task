#include<iostream>
#include<string>
#include<ctime>
int main(void)
{
	using namespace std;
	struct car {
		string make;
		int year;
	};
	int n;
	cout << "How many cars do you wish to catalog?";
	(cin >> n).get();//没有读取空白符，留在输入缓存里，在读取字符时停止输入。
	car *pt = new car[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Car #" << i + 1 << ":\n";
		cout << "Pleaseenter the make:";
		getline(cin, pt[i].make);
		cout << "Please enter the year made: ";
		(cin >> pt[i].year).get();
	}
	cout << "Here is your collection:" << endl << "Please enter the delay time";
	int times;
	cin >> times;
	cin.get();
	clock_t delay = times * CLOCKS_PER_SEC;//等待时间=时间*单位时间
	for (int i = 0; i < n; i++)
	{
		cout << pt[i].year << "\t" << pt[i].make << endl;
		cout << pt[i].make.size() << endl;
		clock_t start = clock();//起始时间
		while (clock() - start < delay);
	}
	delete[]pt;//释放动态内存空间
	return 0;
}