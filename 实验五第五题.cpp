#include<iostream>
using namespace std;
class Point
{
public:
	Point():x(60),y(80){}
	void setPoint(int i, int j)
	{
		x = 60 + i;
		y = 60 + j;
	}
	void display()
	{
		cout << "坐标:(" << x << "," << y << ")" << endl;
	}
private:
	int x;
	int y;
};

int main()
{
	Point p;
	cout << "初始化坐标：";
	p.display();
	p.setPoint(10, 20);
	cout << "修改后的坐标：";
	p.display();
	return 0;
}
