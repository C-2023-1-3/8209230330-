#include<iostream>
using namespace std;
#include<string>

int main() {

	int m_size = 0;
	cout << "����������������ַ��ĸ��� ��" << endl;
	cin >> m_size;

	char* c = new char[m_size];
	cout << "������һ���ַ� ��" << endl;
	cin >> c;

	int num1 = 0; // Ӣ����ĸ��
	int num2 = 0; // �����ַ���
	int num3 = 0; // �ո���
	int num4 = 0; // �����ַ���

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

	cout << "Ӣ����ĸ��Ϊ ��" << num1 << endl;
	cout << "�����ַ���Ϊ ��" << num2 << endl;
	cout << "�ո��ַ���Ϊ ��" << num3 << endl;
	cout << "�����ַ���Ϊ ��" << num4 << endl;
	
	system("pause");

	return 0;
}