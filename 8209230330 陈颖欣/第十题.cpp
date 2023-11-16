#include<iostream>
using namespace std;
#include<string>

int main() {

	int m_size = 0;
	cout << "请输入您想输入的字符的个数 ：" << endl;
	cin >> m_size;

	char* c = new char[m_size];
	cout << "请输入一串字符 ：" << endl;
	cin >> c;

	int num1 = 0; // 英文字母数
	int num2 = 0; // 数字字符数
	int num3 = 0; // 空格数
	int num4 = 0; // 其他字符数

	for (int i = 0; i < m_size; i++)
	{
		if (c[i] >= 'A' && c[i] <= 'Z')
		{
			num1++;
		}
		else if (c[i] >= 'a' && c[i] <= 'z')
		{
			num1++;
		}
		else if (c[i] >= '0' && c[i] <= '9')
		{
			num2++;
		}
	}
	while ((*c = getchar()) != '\n')
	{
		if (*c == ' ')
		{
			num3++;
		}
	}
	num4 = m_size - num1 - num2 - num3;

	cout << "英文字母数为 ：" << num1 << endl;
	cout << "数字字符数为 ：" << num2 << endl;
	cout << "空格字符数为 ：" << num3 << endl;
	cout << "其他字符数为 ：" << num4 << endl;
	
	system("pause");

	return 0;
}