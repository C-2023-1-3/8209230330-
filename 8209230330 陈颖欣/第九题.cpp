#include<iostream>
using namespace std;

int main() {

	int a, b;
	cout << "��������Ҫ��������֣����������������֣� ��" << endl;
	cin >> a;
	cin >> b;

	char choice = '0';
	cout << "����������ʹ�õ����㷽�� ��" << endl;
	cout << "tip : ����ѡ�� + - * / % ���ַ����е�����һ��" << endl;
	cin >> choice;

	switch (choice) // switch ������ֻ��Ϊ���ͻ��ַ���
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
			cout << "����Ϊ0���޷������" << endl;
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
		cout << "�������������Ƿ��������޷����У�" << endl;
		break;
	}

	system("pause");

	return 0;
}