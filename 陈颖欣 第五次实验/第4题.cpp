#include<iostream>
using namespace std;

/*
建立一个对象数组，内放5个学生的（学号，成绩），设立一个函数max，
用指向对象的指针作函数参数，在max函数中找出5个学生的最高成绩者，并输出其学号。
*/

class student
{
public:
	int m_id; // 学号
	int m_score; // 分数

	student(int id)
	{
		this->m_id = id;
		this->m_score = rand() % 41 + 60;
	}
};

int my_max(student* p, student arr[5])
{
	int max = p->m_id;
	int maxscore = p->m_score;
	int count = 0;

	for (student* p = arr; count < 5; p++)
	{
		if (maxscore < (p + 1)->m_score)
		{
			maxscore = (p + 1)->m_score;
			max = (p + 1)->m_id;
		}
		count++;
	}

	return max;
}

int main4()
{
	srand((unsigned int)time(NULL));

	student s1(1);
	student s2(2);
	student s3(3);
	student s4(4);
	student s5(5);

	cout << "五个学生的成绩分别如下 ：" << endl;
	cout << s1.m_score << " " << s2.m_score << " " << s3.m_score << " "
		 << s4.m_score << " " << s5.m_score << endl;

	student arr[5] = { s1,s2,s3,s4,s5 };

	student* p = arr;

	cout << "成绩最高的学生的学号为 ：";
	cout << my_max(p, arr) << endl;

	system("pause");

	return 0;
}