#pragma once
#ifndef EMP_H
#define EMP_H
#include<string>
#include<iostream>
#include<fstream>
using std::endl;
enum  classkind{Employee, Manager,Fink,Highfink};
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
	virtual void Writeall(std::ofstream & fout)const { fout << fname << endl << lname << endl << job << endl; }
	virtual void Getall(std::ifstream &fin){ getline(fin, fname); getline(fin, lname); getline(fin, job);}
	virtual void Getkind(std::ofstream &fout);
};
class employee :public abstr_emp0
{
public:
	employee();
	employee(const std::string &fn, const std::string &ln, const std::string &j);
	employee(const employee & e);
	virtual void ShowAll()const;
	virtual void SetAll();
	virtual void Writeall(std::ofstream & fout)const { abstr_emp0::Writeall(fout); }
	virtual void Getall(std::ifstream &fin) { abstr_emp0::Getall(fin); }
	virtual void Getkind(std::ofstream &fout);
};
class manager :virtual public abstr_emp0
{
private:
	int inchargeof;
protected:
	int InChargeOf()const { return inchargeof; }
	int & InChargeOf() { return inchargeof; }
	void getInCharge() {
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
	virtual void Writeall(std::ofstream & fout)const { abstr_emp0::Writeall(fout); fout << inchargeof << endl; }
	virtual void Getall(std::ifstream &fin) { abstr_emp0::Getall(fin); (fin >> inchargeof).get(); }
	virtual void Getkind(std::ofstream &fout);
};
class fink :virtual public abstr_emp0
{
private:
	std::string reportsto;
protected:
	const std::string ReportsTo()const { return reportsto; }
	std::string & ReportsTo() { return reportsto; }
	void getReportsTo() {
		std::cout << "Enter reportsto: ";
		getline(std::cin, reportsto);
	}
public:
	fink();
	fink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo);
	fink(const abstr_emp0 & e, const std::string &rpo);
	fink(const fink& e);
	virtual void ShowAll()const;
	virtual void SetAll();
	virtual void Writeall(std::ofstream & fout)const { abstr_emp0::Writeall(fout); fout << reportsto << endl; }
	virtual void Getall(std::ifstream &fin){ abstr_emp0::Getall(fin); getline(fin, reportsto);}
	virtual void Getkind(std::ofstream &fout);
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
	virtual void Writeall(std::ofstream & fout)const { fink::Writeall(fout); fout << manager::InChargeOf() << endl; }
	virtual void Getall(std::ifstream &fin) { fink::Getall(fin); (fin >> manager::InChargeOf()).get(); }
	virtual void Getkind(std::ofstream &fout);
};
#endif // !EMP_H
