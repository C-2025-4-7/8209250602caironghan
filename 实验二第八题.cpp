#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, xn, xn1;
	cout << "请输入a的值：";
	cin >> a;
	if (a < 0)
	{
		cout << "错误：负数没有实数平方根" << endl;
		return 1;
	}
	if (a == 0)
	{
		cout << "0的平方根是0" << endl;
		return 0;
	}
	xn = a;
	do {
		xn1 = 0.5 * (xn + a / xn);
		if (fabs(xn1 - xn) < 1e-5)
		{
			break;
		}
		xn = xn1;
	} while (true);
	cout << a << "的平方根为：" << xn1 << endl;
	return 0;
}