#include<iostream>
#include<cstring>
#include<cctype>
int main()
{
	using namespace std;
	char word[20];//char 可以存储数字 并且输出数字。
	cout << "Enter woeds (q to quit):";
	int n = 0, v = 0, c = 0;
	while (cin>>word)//用string的字符串需要配合getline使用而且用string的word=="q"对比是对比地址不是对比字符串；cin以空格作为输入结束并忽略空格不以换行符作为错误输入标志。
	{
		if (word[0] == 'q'&&strlen(word) == 1)
			break;
		if (!isalpha(word[0]))
		{
			n++;//continue使while语句跳过最后的cin>>且重复判断第一个word。
		}
		switch (word[0]) 
		{
		case 'a':
		case'b':
		case'c':
		case'd':
		case'e':v++; break;
		default:c++; break;
		 }

	}
	cout << v << " words beginning with vowels" << endl;
	cout << c << " words beginning with consonants\n";
	cout << n << " others";
	return 0;
}