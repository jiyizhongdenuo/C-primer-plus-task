#include<iostream>
#include"结构.h"
#include<cstring>
using namespace std;
void show(const chaff* c)
{
	for (int n = 0; n < 3; n++)
	{
		cout << c[n].dross << "'slag is : " << c[n].slag<<endl;
	}
}
void set(chaff* c)
{
	char temp[20];
	for (int z = 0; z < 3;z++)
	{
		cout << "Enter the dross :";
		cin.get(temp, 20);
		
		char next;
		cin.get(next);
		while (next != '\n')
			cin.get();
		
		strcpy_s(c[z].dross, temp);
		cout << "Enter the slag :";
		(cin >> c[z].slag).get();
		//c->slag = sizeof(c->dross); 错误，动态存储地址不能使用sizeof来计算大小。
	}
}
