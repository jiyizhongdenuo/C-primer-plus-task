#include<string>
#include<iostream>
void strcout(const std::string & st)
{
	using namespace std;
	static int total = 0;
	int count = 0;
	cout << " \" " << st << "\" contains ";
	for (int n = 0; n < st.size(); n++)
	{
		count++;
	}
	total += count;
	cout << count << " characters \n" << total << " characters total\n";
}