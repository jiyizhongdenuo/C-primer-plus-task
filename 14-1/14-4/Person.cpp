#include"Person.h"
#include<cstdlib>
void Person::Get()
{
	cout << "Enter the firstname: ";
	getline(cin, firstname);
	cout << "Enter next name:";
	getline(cin, nextname);
}
void Gunslinger::Data()const
{
	cout << "Nick is :" << num << endl;
	cout<< "The time of get the gun :" << Draw() << endl;//Date()const��Draw()Ҳ����const��Draw����Date��Gunslinger��������ģ���Date������ı�ö��󣬰������ε��á�
}
void Gunslinger::Get()
{
	cout << "Enter Nick:";
	cin >> num;
}
double Gunslinger::Draw()const
{
	return rand() % 3 + 1;
}
void Gunslinger::Show()const
{
	cout << "Gunslinger \n";
	Person::Show();
	Data();
}
void Gunslinger::Set()
{
	cout << "Enter Guns name: \n";
	Person::Get();
	Gunslinger::Get();
}
void PokerPlayer::Data()const
{
	cout << "The cards :" << Draw() << endl;
}
void PokerPlayer::Get()
{
	cout << "Enter PokerPlayer name:\n";
	Person::Get();
}
void PokerPlayer::Show()const
{
	cout << "PokerPlayer :\n";
	Person::Show();
	Data();
}
int PokerPlayer::Draw()const
{
	return rand() % 52 + 1;
}
double BadDude::Gdraw()const
{
	return Gunslinger::Draw();
}
int BadDude::Cdraw()const
{
	return PokerPlayer::Draw();
}
void BadDude::Show()const
{
	cout << "BadDude: \n";
	Person::Show();
	Data();
}
void BadDude::Set()
{
	cout << "Enter BadDude name: \n";
	Person::Get();
	Get();
}
void  BadDude::Get()
{
	Gunslinger::Get();
}
void BadDude::Data()const
{
	Gunslinger::Data();
	PokerPlayer::Data();
	cout << "The next cards: " << Cdraw() << endl;
	cout << "The time of BadDude get the gun: " << Gdraw() << endl;
}