#include<iostream>
using namespace std;
class Student 
{
public:
	Student(int id_,float score_):id(id_),score(score_){}
	int getId()const { return id; }
	float getScore()const { return score; }
private:
	int id;
	float score;
		
};
void max(Student* pStu, int size)
{
	if (pStu == nullptr || size <= 0)
	{
		cout << "参数错误！" << endl;
		return ;
	}

	float maxScore = pStu->getScore();
	int maxId = pStu->getId();

	for (int i = 1; i < size; i++)
	{
		if ((pStu + i)->getScore() > maxScore)
		{
			maxScore = (pStu + i)->getScore();
			maxId = (pStu + i)->getId();
		}
	}
	cout << "最高成绩：" << maxScore << endl;
	cout << "对应学号：" << maxId << endl;
}

int main()
{
	Student stuArray[5] = {
		Student(1,80.0),
		Student(2,90.0),
		Student(3,89.0),
		Student(4,78.9),
		Student(5,88.7)
	};
	max(stuArray, 5);
	return 0;
}