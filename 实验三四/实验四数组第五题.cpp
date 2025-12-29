#include<iostream>
using namespace std;
int getStrLength(const char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}
int indexOf(const char s1[], const char s2[]) 
{
    int len1 = getStrLength(s1);
    int len2 = getStrLength(s2);

    if (len1 == 0) 
    {
        return 0;
    }
    
    if (len1 > len2) {
        return -1;
    }

    for (int i = 0; i <= len2 - len1; i++) 
    {
        bool isMatch = true; 
        for (int j = 0; j < len1; j++) 
        {
            if (s2[i + j] != s1[j]) 
            {
                isMatch = false;
                break; 
            }
        }
        
        if (isMatch) {
            return i;
        }
    }
    return -1;
}

int main() {
    char s1[100], s2[200];
    cout << "Enter the first string: ";
    cin.getline(s1, 100);
    cout << "Enter the second string: ";
    cin.getline(s2, 200);

    
    int result = indexOf(s1, s2);
    cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << result << endl;
    return 0;
}