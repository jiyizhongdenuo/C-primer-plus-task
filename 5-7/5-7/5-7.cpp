#include<iostream>
#include<string>
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
	car *cars = new car[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Car #" << i+1 << "\nPleaseenter the make: ";
		getline(cin, cars[i].make);//car[i]本身是当作指向cars结构的指针来进行检索的。
		cout << "Please enter the year made: ";
		(cin >> cars[i].year).get();
	}
	cout << "Here is your collection: ";
	for (int i = 0; i < n; i++)
		cout << cars[i].year << cars[i].make << endl;
	cout << cars[1].make.size();
	delete [] cars;
	return 0;
}
