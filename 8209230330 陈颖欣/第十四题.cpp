#include<iostream>
using namespace std;
#define Max 100

int main() {

	int num = 2; // 每天购买苹果数量
	int day = 1; // 购买天数
	double sum = 1.6; // 总费用

	for (int i = 0; num <= Max; i++)
	{
		num = num * 2;
		day++;
		sum = sum + 0.8 * num;
	}

	if (num > 100)
	{
		day--;
		sum = sum - num * 0.8;
		num = num / 2;
	}

	/* cout << day << endl;
	cout << num << endl;
	cout << sum << endl; */

	double ave = sum / day;

	cout << "每天平均花的钱为 ：" << ave << endl;

	system("pause");

	return 0;
}