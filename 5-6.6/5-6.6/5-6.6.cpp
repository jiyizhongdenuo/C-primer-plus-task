#include <iostream> 
const int MONTHS = 12;
const char*months[MONTHS] = { "January","February","March","April","May","June","July","August","Sept ember","October","November","December" }; 
const char* years[3] = { "第一年","第二年","第三年" }; 
int main() 
{ 
	using namespace std; 
	int year_sale[3], sum = 0, sales[3][MONTHS]; 
for (int i = 0; i < 3; i++) 
{ 
	int temp = 0;
	cout << years[i] << "的每个月销售量:" << endl; 
for (int j = 0; j < MONTHS; j++) 
{ 
	cout << "请输入" << months[j] << "的销售量:"; 
    cin >> sales[i][j]; 
	temp += sales[i][j];
}
year_sale[i] = temp; 
sum += year_sale[i];
}
for (int i = 0; i < 3; i++) 
	cout << years[i] << "的销售量为：" << year_sale[i] << endl; 
cout << "这三年的总销售量为：" << sum << endl; 
return 0;
}