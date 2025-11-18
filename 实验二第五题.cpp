#include <iostream>
using namespace std;
int main()
{
	char c;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	cout << "请输入一行字符：" << endl;
	while ((c = cin.get()) != '\n')
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) letters++;
		else if (c == ' ') spaces++;
		else if (c >= '0' && c <= '9') digits++;
		else others++;
	}
	cout << "英文字母：" << letters << "个" << endl;
	cout << "空格：" << spaces << "个" << endl;
	cout << "数字：" << digits << "个" << endl;
	cout << "其他字符：" << others << "个" << endl;
	return 0;
}