#include<iostream>
#include"9-1.h"
#include<cstring>
using namespace std;

void setgolf(golf &g, const char * name, int hc)
{
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf & g)
{
	int n;
	cout << "Enter the golfer's name:";
	cin.getline(g.fullname, len);//��cin.get������Ϊ�ж����ж��Ƿ������루ch=cin.get����==��n�������ǽ�������Ϊ�жϡ�
	if (g.fullname[0]=='\0')
		return 0;
	else
		n = 1;
	cout << "Enter the golfer's score:";
	(cin >> g.handicap).get();//g.handicapmĬ�ϳ�ʼ��Ϊ0
	cin.clear();
	cin.getline(g.fullname, len);
	return n;
}

void handicap(golf &g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf &g)
{
	cout << "the " << g.fullname << "'s score :" << g.handicap<<endl;
}
