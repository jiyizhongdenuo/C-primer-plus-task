#pragma once
#ifndef CLASSIC_H
#define CLASSIC_H
class Cd
{
private:
	char * performers;
	char * label;
	int selections;
	double playtime;
public:
	Cd(const char * s1, const char * s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	virtual ~Cd();
	virtual void Report()const;
};
class Classic :public Cd
{
	char * CD;
public:
	Classic();
	Classic(const char * s1, const char *s2, int n, double x, const char *s3);
	Classic(Cd & d, const char * s3);
	virtual  ~Classic();
	virtual void Report()const;
};
#endif // !CLASSIC_H
