#include<iostream>
using namespace std;

/* 
要求 ：猴子吃桃：猴子第一天摘若干桃子，当即吃了一半，还不过瘾，又吃了一个。第二天
       又将剩下的桃子吃掉一半，又多吃一个，以后每天如此，到第10天，发现只剩最后一
	   个桃子。问，第一天猴子共摘多少桃子（用递归实现）。
*/

void chitao(int& sum, int& day)
{
	while (day != 1)
	{
		chitao(sum = (sum + 1) * 2, --day);
	}
}

int main4() {

	int sum = 1; // 第 10 天，剩余一个桃子
	int day = 10; // 共 10 天

	chitao(sum, day);

	cout << "第一天猴子共摘桃子数为 ：" << sum << endl;

	system("pause");

	return 0;
}