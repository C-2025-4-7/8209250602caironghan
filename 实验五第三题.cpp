#include<iostream>
using namespace std;
class Cuboid
{
public:
	void input()
	{
		cout << "请输入长方柱的长，宽，高：";
		cin >> length >> width >> height;
		if (length <= 0 || width <= 0 || height <= 0)
		{
			cout << "输入错误！请重新输入正数：";
			cin >> length >> width >> height;
		}
	}
	double getVolume()
	{
		return length * width * height;
	}
	void showVolume()
	{
		cout << "体积=" << getVolume() << endl;
	}
private:
	double length;
	double width;
	double height;
};

int main()
{
	const int COUNT = 3;
	Cuboid cuboids[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		cout << "\n处理第" << i + 1 << "个长方柱：" << endl;
		cuboids[i].input();
	}
	cout << "\n体积计算结果" << endl;
	for (int i = 0; i < COUNT; i++)
	{
		cout << "第" << i + 1 << "个长方柱：";
		cuboids[i].showVolume();

	}
	return 0;
}