#include <iostream>
using namespace std;
int parseHex(const char* const hexString) 
{
    int result = 0;
    int i = 0;
     while (hexString[i] != '\0') 
     {
        char ch = hexString[i];
        int digit;
        if (ch >= '0' && ch <= '9') {
            digit = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F') {
            digit = 10 + (ch - 'A');
        }
        else if (ch >= 'a' && ch <= 'f') {
            digit = 10 + (ch - 'a');
        }
        else {
            return -1; 
        }
        result = result * 16 + digit;
        i++;
     }
     return result;
}
int main() {
    char hexStr[20];
    cout << "请输入一个十六进制字符串（例如 A5 或 1a3）: ";
    cin >> hexStr;
    int decimal = parseHex(hexStr);
    if (decimal != -1) {
        cout << "十六进制字符串 \"" << hexStr << "\" 转换为十进制是: " << decimal << endl;
    }
    else {
        cout << "输入的字符串包含非法字符，无法转换。" << endl;
    }
    return 0;
}