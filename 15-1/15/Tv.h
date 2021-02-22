#pragma once
#ifndef _TV__H
#define _TV__H
#include<iostream>
using namespace std;
class Tv;
class Remote;
class Remote
{
public:
	enum Form{convention,interaction};//��Ҫ�Ȳ��ֱ���������������enum��TV�಻����Remote������ݣ���Ҫ�ڶ���������
	enum State{off, on};
	enum {Minval, Maxval=20};
	enum {Antenna, Cable};
	enum {TV,DVD};
private:
	int fo;
	int mode;
	friend class Tv;
public:
	Remote(int m = TV, Form f = convention) :mode(m) { fo = f; }
	bool volup(Tv &t);
	bool voldown(Tv &t);
	void onoff(Tv &t);
	void chanup(Tv &t);
	void chandown(Tv &t);
	void set_mode(Tv &t);
	void set_input(Tv &t);
	void set_chan(Tv &t, int c);//��Ԫ�����ǣ��������������������Tv���Ϊ��Ԫ�����������������еĺ������ܻ�Ϊ��Ԫ������һ��һ��������֪���������ڡ�
	void mode_show()const { cout << "Remote pretent mode is " << fo << endl; }
};
class Tv
{
public:
	enum Form { convention, interaction };
	friend class Remote;
	void set_fo(Remote & r);
	enum State { off, on };
	enum { Minval=0, Maxval = 20 };
	enum { Antenna, Cable };
	enum { TV, DVD };
	Tv(int s = off, int mc = 125) :state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
	void onoff() { state = (state == on) ? off : on; }
	bool ison()const { return state == on; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
	void set_input() { input = (input == TV) ? DVD : TV; }
	void settings()const;
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
};
bool Tv::volup()
{
	if (volume < Maxval)
	{
		volume++;
		return true;
	}
	else
		return false;
}
bool Tv::voldown()
{
	if (volume > Minval)
	{
		volume--;
		return true;
	}
	else
		return false;
}
void Tv::chanup()
{
	if (channel < maxchannel)
	{
		channel++;
	}
	else
		channel = 1;
}
void Tv::chandown()
{
	if (channel >1)
	{
		channel--;
	}
	else
		channel = maxchannel;
}
void Tv::settings()const
{
	cout << "TV is " << (state == off ? "Off" : "On") << endl;
	if (state == on)
	{
		cout << "Volume setting = " << volume << endl;
		cout << "Channel setting = " << channel << endl;
		cout << "Mode = " << (mode == Antenna ? "antenna" : "cable") << endl;
		cout << "Input = " << (input == TV ? "TV" : "DVD") << endl;
	}
}
bool Remote::volup(Tv &t) { return t.volup(); }
bool Remote::voldown(Tv &t) { return t.voldown(); }
void Remote::onoff(Tv &t) { t.onoff(); }
void Remote::chanup(Tv &t) { t.chanup(); }
void Remote::chandown(Tv &t) { t.chandown(); }
void Remote::set_mode(Tv &t) { t.set_mode(); }
void Remote::set_input(Tv &t) { t.set_input(); }
void Remote::set_chan(Tv &t, int c) { t.channel = c; }
void Tv::set_fo(Remote & r) { r.fo = (r.fo == convention) ? interaction : convention; }
#endif // !_TV__H
