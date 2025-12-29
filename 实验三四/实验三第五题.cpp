#include<iostream>
using namespace std;
int peach(int day)
{
	if (day == 10)
	{
		return 1;
	}
	return(peach(day + 1) + 1) * 2;
}
int main()
{
	int total = peach(1);
	cout << "猴子第一天一共摘了：" << total << "个桃子" << endl;
	return 0;
}