#include"emp.h"
#include<string>
using std::cin;
using std::cout;
using std::endl;
abstr_emp0::abstr_emp0()
{
	fname = "noname";
	lname = "";
	job = "no job";
}
abstr_emp0::abstr_emp0(const std::string &fn, const std::string &ln, const std::string &j)
{
	fname = fn;
	lname = ln;
	job = j;
}
void abstr_emp0::ShowAll()const
{
	cout << "Firstname: " << fname << endl;
	cout << "Lastname: " << lname << endl;
	cout << "Job is: " << job << endl;
}
void abstr_emp0::SetAll()
{
	cout << "Enter firstname: ";
	getline(std::cin, fname);
	cout << "Enter lastname: ";
	getline(cin, lname);
	cout << "Enter the job: ";
	getline(cin, job);
}
std::ostream& operator<<(std::ostream &os, const abstr_emp0 & e)
{
	os << e.fname << " " << e.lname << ", " << e.job << endl;
	return os;
}
abstr_emp0::~abstr_emp0() {}
employee::employee() :abstr_emp0() {}
employee::employee(const std::string &fn, const std::string &ln, const std::string &j) : abstr_emp0(fn, ln, j) {}
employee::employee(const employee & e): abstr_emp0(e){}
void employee::ShowAll()const
{
	abstr_emp0::ShowAll();
}
void employee::SetAll()
{
	abstr_emp0::SetAll();
}
manager::manager() :abstr_emp0()
{
	inchargeof = 0;
}
manager::manager(const std::string &fn, const std::string &ln, const std::string &j, int ico) : abstr_emp0(fn, ln, j)
{
	inchargeof = ico;
}
manager::manager(const abstr_emp0 &e, int ico) : abstr_emp0(e)
{
	inchargeof = ico;
}
manager::manager(const manager & m) : abstr_emp0()
{
	inchargeof = m.inchargeof;
}
void manager::ShowAll()const
{
	abstr_emp0::ShowAll();
	cout << "Inchargeof: " << InChargeOf() << endl;
}
void manager::SetAll()
{
	abstr_emp0::SetAll();
	cout << "Enter inchargeof: ";
	(cin >> inchargeof).get();
}
fink::fink() :abstr_emp0(), reportsto("no") {}
fink::fink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo) : abstr_emp0(fn, ln, j), reportsto(rpo) {}
fink::fink(const abstr_emp0 & e, const std::string &rpo) : abstr_emp0(e), reportsto(rpo) {}
fink::fink(const fink& e) : abstr_emp0(e), reportsto(e.reportsto) {}
void fink::ShowAll()const
{
	abstr_emp0::ShowAll();
	cout << "Reportsto: " << reportsto << endl;
}
void fink::SetAll()
{
	abstr_emp0::SetAll();
	cout << "Enter reportsto: ";
	getline(cin, reportsto);
}
highfink::highfink() :abstr_emp0(), fink(), manager() {}
highfink::highfink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo, int ico) : abstr_emp0(fn, ln, j), fink(fn, ln, j, rpo), manager(fn, ln, j, ico) {}
highfink::highfink(const abstr_emp0 &e, const std::string &rpo, int ico) : abstr_emp0(e), fink(e, rpo), manager(e, ico) {}
highfink::highfink(const fink &f, int ico) : abstr_emp0(f), fink(f), manager(f, ico) {}
highfink::highfink(const manager & m, const std::string & rpo) : abstr_emp0(m), manager(m), fink(m, rpo) {}
highfink::highfink(const highfink &h) : abstr_emp0(h), manager(h), fink(h) {}
void highfink::ShowAll()const
{
	abstr_emp0::ShowAll();
	cout << "InChargeOf: " << manager::InChargeOf() << endl;
	cout << "ReportsTo: " << fink::ReportsTo() << endl;
}
void highfink::SetAll()
{
	abstr_emp0::SetAll();
	manager::getInCharge();
	fink::getReportsTo();
}
void abstr_emp0::Getkind(std::ofstream &fout) { fout << Employee << endl; }
void employee::Getkind(std::ofstream &fout) { fout << Employee << endl; }
void manager::Getkind(std::ofstream &fout) { fout << Manager << endl; }
void fink::Getkind(std::ofstream &fout) { fout << Fink<< endl; }
void highfink::Getkind(std::ofstream &fout) { fout << Highfink<< endl; }