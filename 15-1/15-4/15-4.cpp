#include"Sales.h"
int main()
{
	double vals1[12] ={1220, 1100, 1122, 2212, 1232, 2334, 2884, 2393, 3302, 2922, 3002, 3544};
	double vals2[12] ={12, 11, 22, 21, 32, 24, 28, 29, 33, 29, 32, 35};
	Sales sales1(2011, vals1, 121);
	LabeledSales sales2("Blogstar", 2012, vals2, 12);
	cout << "First try block:\n";
	Sales::bad_index * ss;
	LabeledSales::nbad_index *l;
	try
	{
		int i;
		cout << "Year = " << sales1.Year() << endl;
		for (i = 0; i < 12; i++)
		{
			cout << sales1[i] << ' ';
			if (i % 6 == 5)
				cout << endl;
		}
		cout << "Year = " << sales2.Year() << endl;
		cout << "Label = " << sales2.Label() << endl;
		for (i = 0; i <= 12; i++)
		{
			cout << sales2[i] << ' ';
			if (i % 6 == 5)
				cout << endl;
		}
		cout << "End of try.\n";
	}
	catch (logic_error& bad)
	{
		bad.what();
		if (l = dynamic_cast<LabeledSales::nbad_index *> (&bad))
		{
			cout << "Comany: " << l->label_val() << endl;
			cout << "bad index: " << l->bi_val() << endl;
		}
		else if(ss = dynamic_cast<Sales::bad_index *>(&bad))//忽略了赋予指针而导致代码块无法使用该指针。
		{
			cout << "bad index: " << ss->bi_val() << endl;
		}
	}
	cout << "\nNexct try block:\n";
	try
	{
		sales2[2] = 37.5;
		sales1[20] = 23345;
		cout << "End of try block2.\n";
	}
	catch (logic_error& bad)
	{
		bad.what();
		if (l = dynamic_cast<LabeledSales::nbad_index *>(&bad))
		{
			cout << "Comany: " << l->label_val() << endl;
			cout << "bad index: " << l->bi_val() << endl;
		}
		else if (ss = dynamic_cast<Sales::bad_index *>(&bad))
			cout << "bad index: " << ss->bi_val() << endl;
	}
	cout << "done\n";
	system("pause");
	return 0;
}