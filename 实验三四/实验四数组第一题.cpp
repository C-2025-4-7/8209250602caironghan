#include<iostream>
using namespace std;
int main()
{
	int distinct[10];
	int count = 0;
	int num;
	cout << "Enter ten number:";
	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		bool isNew = true;
		for (int j = 0; j < count; j++)
		{
			if (distinct[j] == num)
			{
				isNew = false;
				break;
			}
		}
		if (isNew)
		{
			distinct[count] = num;
			count++;
		}
	}
	cout << "The distinct number are:";
	for (int i = 0; i < count; i++)
	{
		cout << distinct[i] << "";
	}
	cout << endl;

	return 0;
}