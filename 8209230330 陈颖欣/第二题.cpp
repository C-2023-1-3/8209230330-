#include<iostream>
using namespace std;
#define P 3.14

int main() {

	int r = 0;
	cout << "������Բ׶�׵İ뾶 ��" << endl;
	cin >> r;

	int h = 0;
	cout << "������Բ׶�ĸ� ��" << endl;
	cin >> h;

	cout << "Բ׶�����Ϊ ��" << (P * r * r * h) / 3 << endl;

	system("pause");

	return 0;
}