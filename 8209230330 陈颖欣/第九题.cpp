#include<iostream>
using namespace std;

int main() {

	int a, b;
	cout << "请输入您要运算的数字（仅可输入两个数字） ：" << endl;
	cin >> a;
	cin >> b;

	char choice = '0';
	cout << "请输入您想使用的运算方法 ：" << endl;
	cout << "tip : 您可选择 + - * / % 五种方法中的任意一种" << endl;
	cin >> choice;

	switch (choice) // switch 括号中只能为整型或字符型
	{
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a - b << endl;
		break;
	case '*':
		cout << a * b << endl;
		break;
	case '/':
		if (b == 0)
		{
			cout << "除数为0，无法相除！" << endl;
		}
		else
		{
			cout << a / b << endl;
		}
		break;
	case '%':
		cout << a % b << endl;
		break;
	default:
		cout << "您输入的运算符非法，计算无法进行！" << endl;
		break;
	}

	system("pause");

	return 0;
}