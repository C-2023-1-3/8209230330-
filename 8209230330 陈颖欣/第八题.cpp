#include<iostream>
using namespace std;

int main() {

	int a, b, c;
	cout << "�����������ε������� ��" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "�������ε��ܳ�Ϊ ��" << (a + b + c) << endl;
		if (a == b || a == c || c == b)
		{
			cout << "��������Ϊ����������" << endl;
		}
		else
		{
			cout<<"�������β�Ϊ����������" << endl; 
		}
	}
	else
	{
		cout << "��������������޷�����һ��������" << endl;
	}


	system("pause");

	return 0;
}