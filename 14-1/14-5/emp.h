#pragma once
#ifndef EMP_H
#define EMP_H
#include<string>
#include<iostream>
class abstr_emp0
{
private:
	std::string fname;
	std::string lname;
	std::string job;
public:
	abstr_emp0();
	abstr_emp0(const std::string &fn, const std::string &ln, const std::string &j);
	virtual void ShowAll()const;
	virtual void SetAll();
	friend std::ostream & operator<<(std::ostream & os, const abstr_emp0 &e);
	virtual ~abstr_emp0() = 0;
};
class employee :public abstr_emp0
{
public:
	employee();
	employee(const std::string &fn, const std::string &ln, const std::string &j);
	virtual void ShowAll()const;
	virtual void SetAll();
};
class manager :virtual public abstr_emp0
{
private:
	int inchargeof;
protected:
	int InChargeOf()const { return inchargeof; }
	int & InChargeOf() { return inchargeof; }
	void getInCharge(){
		std::cout << "Enter inchargeof: ";
		(std::cin >> inchargeof).get();
	}
public:
	manager();
	manager(const std::string &fn, const std::string &ln, const std::string &j, int ico = 0);
	manager(const abstr_emp0 &e, int ico);
	manager(const manager & m);
	virtual void ShowAll()const;
	virtual void SetAll();
};
class fink :virtual public abstr_emp0
{
private:
	std::string reportsto;
protected:
	const std::string ReportsTo()const { return reportsto; }
	std::string & ReportsTo() { return reportsto; }
	void getReportsTo(){
		std::cout << "Enter inchargeof: ";
		getline(std::cin, reportsto);
	}
public:
	fink();
	fink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo);
	fink(const abstr_emp0 & e, const std::string &rpo);
	fink(const fink& e);
	virtual void ShowAll()const;
	virtual void SetAll();
};
class highfink :public manager, public fink
{
public:
	highfink();
	highfink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo, int ico);
	highfink(const abstr_emp0 &e, const std::string &rpo, int ico);
	highfink(const fink &f, int ico);
	highfink(const manager & m, const std::string & rpo);
	highfink(const highfink &h);
	virtual void ShowAll()const;
	virtual void SetAll();
};
#endif // !EMP_H
