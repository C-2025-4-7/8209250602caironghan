#include<iostream>
#include"student.h"
using namespace std;
void Student::set_value(int n,const char* nm,char s)
{
	num = n;
	int i = 0;
	while (nm[i] != '\0' && i < 19) {
		name[i] = nm[i];
		i++;
	}
	name[i] = '\0';
	sex = s;
}
void Student::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}