#include<iostream>
using namespace std;

/* 
Ҫ�� �����ӳ��ң����ӵ�һ��ժ�������ӣ���������һ�룬������񫣬�ֳ���һ�����ڶ���
       �ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ��һ�����Ժ�ÿ����ˣ�����10�죬����ֻʣ���һ
	   �����ӡ��ʣ���һ����ӹ�ժ�������ӣ��õݹ�ʵ�֣���
*/

void chitao(int& sum, int& day)
{
	while (day != 1)
	{
		chitao(sum = (sum + 1) * 2, --day);
	}
}

int main4() {

	int sum = 1; // �� 10 �죬ʣ��һ������
	int day = 10; // �� 10 ��

	chitao(sum, day);

	cout << "��һ����ӹ�ժ������Ϊ ��" << sum << endl;

	system("pause");

	return 0;
}