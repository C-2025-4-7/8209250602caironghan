#include <iostream>
using namespace std;
int main()
{
    double a, b;
    char fuhao;
    cout << "输入：数字 运算符 数字（如3+5）：";
    cin >> a >> fuhao >> b;

    switch (fuhao) {
    case '+': cout << a << "+" << b << "=" << a + b << endl;
        break;
    case '-': cout << a << "-" << b << "=" << a - b << endl;
        break;
    case '*': cout << a << "*" << b << "=" << a * b << endl;
        break;
    case '/':
        if (b == 0) { cout << "错误：除数为0！" << endl; return 1; }
        cout << a << "/" << b << "=" << a / b << endl;
        break;
    case '%':
        if (b == 0 || a != (int)a || b != (int)a) {
            cout << "错误：取模仅支持非零整数！" << endl;
            return 1;
        }
        cout << (int)a << "%" << (int)b << "=" << (int)a % (int)b << endl;
        break;
    default: cout << "错误：非法运算符！" << endl;
        return 1;
    }
    return 0;
}