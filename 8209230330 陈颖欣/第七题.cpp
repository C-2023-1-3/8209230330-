#include<iostream>
using namespace std;

int main() {

	float x = 0;
	cout << "������ x ��ֵ ��" << endl;
	cin >> x;

	if (0 < x && x < 1)
	{
		cout << (3 - 2*x) << endl;
	}
	else if (x >= 1 && x < 5)
	{
		cout << (2 / (4 * x)) + 1 << endl;
	}
	else if (x >= 5 && x < 10)
	{
		cout << x * x << endl;
	}
	else
	{
		cout << "����������ݲ����϶������޷����� ��" << endl;
	}

	system("pause");

	return 0;
}