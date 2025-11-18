#include<iostream>
using namespace std;
int main()
{
	char ab;
	cout << "请输入一个字符：";
	cin >> ab;
	if (ab >= 'a' && ab <= 'z')
	{
		cout << "转换后的大写字符是:" << (char)(ab - 32) << endl;
	}
	else
	{
		cout << "后继字符的ASCII码值是:" << (char)(ab + 1) << endl;
	}
	return 0;
}