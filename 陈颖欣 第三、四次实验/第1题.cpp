#include<iostream>
using namespace std;

void GcdLcm(int& a, int& b)
{
	int temp1 = a;
	int temp2 = b;

	if (b == 0)
	{
		cout << "���Լ��Ϊ �� 0" << endl;
		cout << "��С������Ϊ �� 0" << endl;
		return;
	}

	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	cout << "���Լ�� ��" << a << endl;
	cout << "��С������ ��" << (temp1 * temp2) / a << endl;
}

int main1() {

	int m, n;

	cout << "��ֱ����� m �� n ��ֵ ��" << endl;
	cin >> m >> n;

	GcdLcm(m, n);

	system("pause");

	return 0;
}