#include <iostream>
using namespace std;
int main()
{
	int a, b, t, num1, num2;
	cout << "请输入两个正整数：";
	cin >> a >> b;
	num1 = a; num2 = b;
	while (b != 0)
	{
		t = a % b;
		a = b;
		b = t;
	}
	cout << "最大公约数：" << a << endl;
	cout << "最小公倍数：" << num1 * num2 / a << endl;
	return 0;
}