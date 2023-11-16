#include<iostream>
using namespace std;

// 最大公约数
int findMax(int a, int b)
{
	// 以除数和余数反复做除法运算，当余数为 0 时，取当前算式除数为最大公约数
	while (b != 0)
	{
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

// 最小公倍数
int findMin(int a, int b)
{
	return (a * b) / findMax(a, b);
}

int main() {

	int a, b;
	cout << "请输入两个正整数 ：" << endl;
	cin >> a;
	cin >> b;

	cout << "最大公约数为 ：" << findMax(a, b) << endl;
	cout << "最小公倍数为 ：" << findMin(a, b) << endl;

	system("pause");

	return 0;
}