#include<iostream>
using namespace std;

void GcdLcm(int& a, int& b)
{
	int temp1 = a;
	int temp2 = b;

	if (b == 0)
	{
		cout << "最大公约数为 ： 0" << endl;
		cout << "最小公倍数为 ： 0" << endl;
		return;
	}

	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	cout << "最大公约数 ：" << a << endl;
	cout << "最小公倍数 ：" << (temp1 * temp2) / a << endl;
}

int main1() {

	int m, n;

	cout << "请分别输入 m 与 n 的值 ：" << endl;
	cin >> m >> n;

	GcdLcm(m, n);

	system("pause");

	return 0;
}