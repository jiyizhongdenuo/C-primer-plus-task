#include <iostream>
#include<iomanip>
#include"emp.h"
#include<cstdlib>
const int MAX=10;
const std::string fi = "emp.txt";
int main()
{
	using namespace std;
	abstr_emp0 * pc[MAX];//赋值出点问题。27，创建了非基类。
	ifstream fin(fi.c_str());
	ofstream fout(fi.c_str(),ios::out|ios::app);
	if(fin.is_open())//打开空文件会报错getall获取时.
	{
		cout << "This is your file content: " << endl;
		int classtype, i = 0;
		while ((fin >> classtype).get())
		{
			if (classtype == 5)
				break;
			switch (classtype)
			{
			case Employee: pc[i] = new employee; break;//没有停止符5会一直创建默认构造的employee。
			case Manager:pc[i] = new manager; break;
			case Fink:pc[i] = new fink; break;
			case Highfink:pc[i] = new highfink; break;	            
			}
			pc[i]->Getall(fin);
			pc[i]->ShowAll();
		}
		fin.close();
	}
	if (!fout.is_open())
	{
		cerr << "fout isn't open. ";
		exit(EXIT_FAILURE);
	}
	cout<< "Please choose the class you want to enter: e for employee, m for manager, f for fink, h for highfink, q to quit\n";
	int  index=0;
	char ch;
	while (cin >> ch && index < MAX)
	{
		cin.get();
		if (ch == 'q')
			break;
		switch (ch)
		{
		  case 'e':pc[index] = new employee; break;
		  case 'm':pc[index] = new manager; break;
		  case 'f':pc[index] = new fink; break;
		  case 'h':pc[index] = new highfink; break;
		}
		pc[index]->SetAll();
		index++;
		cout << "Please choose the class you want to enter: e for employee, m for manager, "
			<< "f for fink, h for highfink, q to quit\n";
	}
	for (int i = 0; i < index; i++)
	{
		pc[i]->Getkind(fout);
		pc[i]->Writeall(fout);
	}
	fout << 5;
	fout.close();

	fin.clear();
	fin.open(fi.c_str());
	if(fin.is_open())
	{
	    cout << "Here are the contents of the " << fi << " file:\n";
		int classtype, i = 0;
		while ((fin >> classtype).get())//获取完毕之后，获取下一行的空格并返回true导致无线循环。
		{
			if(classtype==5)
				break;
			switch (classtype)
			{
			case Employee: pc[i] = new employee; break;
			case Manager:pc[i] = new manager; break;
			case Fink:pc[i] = new fink; break;
			case Highfink:pc[i] = new highfink; break;
			}
			pc[i]->Getall(fin);
			pc[i]->ShowAll();
		}
		fin.close();
	}
	cout << "Done!";
	return 0;
}
