#include<iostream>
#include"student.h"
using namespace std;
int main()
{
	Student stud;
	stud.set_value(18, "crh", 'm');
	cout << "学生信息：" << endl;
	stud.display();
	return 0;
}
