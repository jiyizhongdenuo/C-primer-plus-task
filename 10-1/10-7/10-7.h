#pragma once
#ifndef _PLORG
#define _PLORG
class Plorg
{
private:
	char plorg[20];
	int ci;
public:
	Plorg();
	Plorg(const char name[20], int n);
	void showplorg() const;
	void setci(int n);
};

#endif