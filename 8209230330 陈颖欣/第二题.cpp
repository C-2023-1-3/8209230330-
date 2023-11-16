#include<iostream>
using namespace std;
#define P 3.14

int main() {

	int r = 0;
	cout << "请输入圆锥底的半径 ：" << endl;
	cin >> r;

	int h = 0;
	cout << "请输入圆锥的高 ：" << endl;
	cin >> h;

	cout << "圆锥的体积为 ：" << (P * r * r * h) / 3 << endl;

	system("pause");

	return 0;
}