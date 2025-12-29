#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	while (b != 0)
	{
		int t = b;
		b = a % b;
		a = t;
	}
	return a;
}
void gcd_lcm(int a, int b, int& g, int& l)
{
	g = gcd(a, b);
	l = (a / g) * b;
}
int main()
{
	int m, n;
	cout << "请输入两个自然数m和n：";
	cin >> m >> n;
	while (m <= 0 || n <= 0)
	{
		cout << "输入错误，请输入自然数";
		cin >> m >> n;
	}

	int res = gcd(m, n);
	cout << "\n(1)最大公约数:" << res << endl;
	int g, l;
	gcd_lcm(m, n, g, l);
	cout << "(2)最大公约数：" << g << endl;
	cout << "最小公倍数：" << l << endl;
	return 0;
}
