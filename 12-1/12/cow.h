#pragma once
#ifndef __cow
#define __cow
class Cow {
	char name[20];
	char * hobby;
	double weight;
public:
	Cow();
	Cow(const char * nm, const char * ho, double wt);
	Cow(const Cow & c);
	~Cow();
	Cow & operator=(const Cow & c);
	void showcow()const;
};
#endif // !__cow
