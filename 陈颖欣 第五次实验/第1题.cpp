#include<iostream>
using namespace std;

class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
	int hour;

	int minute;

	int second;

public:
	void input() // ����
	{
		cin >> this->hour;
		cin >> this->minute;
		cin >> this->second;
	}

	void output() // ���
	{
		cout << this->hour << ":" << this->minute << ":" << this->second << endl;
	}
};

int main1()
{
	Time t1; //����t1ΪTime�����

	t1.input(); // �����趨ʱ��

	t1.output(); // ���ʱ��

	system("pause");

	return 0;
}