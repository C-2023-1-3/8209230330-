#include<iostream>
using namespace std;
#include<iomanip>

int main() {

	float F = 0;
	cout << "������һ�������¶� ��" << endl;
	cin >> F;
	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << "������Ļ����¶�Ϊ ��"<< F << endl;
	cout << "ת��Ϊ�����¶�Ϊ ��" << (F - 273.15) << endl;

	system("pause");

	return 0;
}