#include<iostream>
using namespace std;

// ���Լ��
int findMax(int a, int b)
{
	// �Գ����������������������㣬������Ϊ 0 ʱ��ȡ��ǰ��ʽ����Ϊ���Լ��
	while (b != 0)
	{
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

// ��С������
int findMin(int a, int b)
{
	return (a * b) / findMax(a, b);
}

int main() {

	int a, b;
	cout << "���������������� ��" << endl;
	cin >> a;
	cin >> b;

	cout << "���Լ��Ϊ ��" << findMax(a, b) << endl;
	cout << "��С������Ϊ ��" << findMin(a, b) << endl;

	system("pause");

	return 0;
}