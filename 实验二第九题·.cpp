#include <iostream>
using namespace std;
int main()
{
	double price = 0.8;
	int day = 1, count = 2;
	double total_cost = 0, total_count = 0;
	while (true)
	{
		double daily_cost = count * price;
		total_cost += daily_cost;
		total_count += count;
		cout << "第" << day << "天：购买" << count << "个，花费" << daily_cost << "元" << endl;
		int next_count = count * 2;
		if (next_count > 100)
		{
			break;
		}
		count = next_count;
		day++;
	}
	double avg_cost = total_cost / day;
	cout << "总天数：" << day << "天" << endl;
	cout << "总购买量：" << total_count << "个" << endl;
	cout << "总花费：" << total_cost << "元" << endl;
	cout << "每天平均花费：" << avg_cost << "元" << endl;
	return 0;
}