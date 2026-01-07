#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void inputtime()
	{
		cout << "请输入时间(时，分，秒):";
		cin >> hour >> minute >> sec ;
	}
	void outputtime()
	{
		cout << "现在的时间是：" << hour<<":" << minute <<":" << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.inputtime();
	t1.outputtime();
	return 0;
}