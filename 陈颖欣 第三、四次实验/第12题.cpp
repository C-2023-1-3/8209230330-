#include<iostream>
using namespace std;
#define Max 100

// 十六进制 ：由 0-9 和 A-F 组成。为了区分与其他数字的区别，开头都是以 0 开始

int DecArr[Max] = { 0 };

int parseHex(const char* const hexString)
{
	int Dec = 0;
	int count = 0;
	int DecCount = 0;
	int size = strlen(hexString);
	int StrLen = size;

	while (size--)
	{
		if (hexString[count] < '0' || (hexString[count] > '9' && hexString[count] < 'A') || (hexString[count] > 'F' && hexString[count] < 'a') || hexString[count]>'f')
		{
			cout << "输入的不是十六进制格式" << endl;
			return 0;
		}
		count++;
	}

	count = StrLen - 1;

	while (StrLen--)
	{
		if (hexString[count] >= '0' && hexString[count] <= '9')
		{
			DecArr[DecCount++] = hexString[count] - '0';
		}
		else if (hexString[count] >= 'A' && hexString[count] <= 'F')
		{
			DecArr[DecCount++] = hexString[count] - 'A' + 10;
		}
		else
		{
			DecArr[DecCount++] = hexString[count] - 'a' + 10;
		}
		count--;
	}

	int j = 0;

	for (int i = 0; i < DecCount; i++)
	{
		if (i < 1)
		{
			Dec = Dec + DecArr[i];
		}
		else
		{
			Dec = (Dec + (DecArr[i] * (16 << j)));
			j += 4;
		}
	}

	cout << Dec << endl;

	return 0;
}

int main12() {

	cout << "A5 转化为 十进制 为 ：";

	parseHex("A5");

	system("pause");

	return 0;
}