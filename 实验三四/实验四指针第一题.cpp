#include<iostream>
using namespace std;
int strlength(const char* s)
{
	int len = 0;
	while (*s != '0')
	{
		len++;
		s++;
	}
	return len;
}
int indexof(const char*s1,const char*s2) {
    int len1 = strlength(s1);
    int len2 = strlength(s2);

   
    if (len1 == 0) return 0;
    
    if (len1 > len2) return -1;

    
    for (int i = 0; i <= len2 - len1; i++) 
    {
        const char* p1 = s1;
        const char* p2 = s2 + i;

        while (*p1 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }

        if (*p1 == '\0') {
            return i;
        }
    }
    return -1;
}
int main() {
    char s1[100], s2[200];

    cout << "请输入子串 s1: ";
    cin.getline(s1, 100);

    cout << "请输入字符串 s2: ";
    cin.getline(s2, 200);

    int pos = indexof(s1, s2);

    if (pos != -1) {
        cout << "子串 \"" << s1 << "\" 在字符串 \"" << s2 << "\" 中第一次出现的下标是: " << pos << endl;
    }
    else {
        cout << "子串 \"" << s1 << "\" 不在字符串 \"" << s2 << "\" 中。" << endl;
    }

    return 0;
}

