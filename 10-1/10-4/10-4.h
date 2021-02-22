
#pragma once
namespace SALES {
	static const int QUARTERS = 4;
	class Sales {
	private:
		
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	public:
		Sales(const double *ar, int n);
		Sales();
		void showSales()const;
		void setSales();
	};
	using namespace std;
}