#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
    int i = 0;
    while (s[i]!='\0')
    {
    char ch = s[i];
    
    if (ch >= 'A' && ch <= 'Z') 
    {
        ch += 32;
    }
        
    if (ch >= 'a' && ch <= 'z')
    {
        int index = ch - 'a';
        counts[index]++;
    }
        i++;
    }
}
int main() {
    char s[200]; 
    int counts[26] = { 0 }; 
    cout << "Enter a string: ";
    cin.getline(s, 200);
    count(s, counts);

    for (int i = 0; i < 26; i++) 
    {
        if (counts[i] > 0) 
        {
            char letter = 'a' + i; 
            cout << letter << ": " << counts[i] << " times" << endl;
        }
    }

    return 0;
}
