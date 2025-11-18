#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cout << "请输入三角形的三条边长：";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        double C = a + b + c;
        cout << "该三边可构成三角形，//周长为：" << C << endl;
        if (a == b || a == c || b == c)
        {
            cout << "该三角形是等腰三角形" << endl;
        }
        else
        {
            cout << "该三角形不是等腰三角形" << endl;
        }
    }
    else
    {
        cout << "输入的三边无法构成三角形（不满足任意两边之和大于第三边）" << endl;
    }
    return 0;
}
