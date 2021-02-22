#pragma once
#ifndef _PERSON__
#define _PERSON__
#include<string>
class Person {
private:
	static const int LIMIT = 25;
	std::string lname;
	char fname[LIMIT];
public:
	Person() { lname = ""; fname[0] = '\0'; };
	Person(const std::string & ln, const char *fn = "Heyyou");
	void show()const;
	void Formalshow()const;
};
#endif