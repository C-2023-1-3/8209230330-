#include<iostream>
using namespace std;

/*
����һ���������飬�ڷ�5��ѧ���ģ�ѧ�ţ��ɼ���������һ������max��
��ָ������ָ����������������max�������ҳ�5��ѧ������߳ɼ��ߣ��������ѧ�š�
*/

class student
{
public:
	int m_id; // ѧ��
	int m_score; // ����

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

	cout << "���ѧ���ĳɼ��ֱ����� ��" << endl;
	cout << s1.m_score << " " << s2.m_score << " " << s3.m_score << " "
		 << s4.m_score << " " << s5.m_score << endl;

	student arr[5] = { s1,s2,s3,s4,s5 };

	student* p = arr;

	cout << "�ɼ���ߵ�ѧ����ѧ��Ϊ ��";
	cout << my_max(p, arr) << endl;

	system("pause");

	return 0;
}