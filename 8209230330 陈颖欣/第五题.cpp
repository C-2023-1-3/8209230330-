#include<iostream>
using namespace std;
#include<iomanip>

int main() {

	float F = 0;
	cout << "请输入一个华氏温度 ：" << endl;
	cin >> F;
	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << "您输入的华氏温度为 ："<< F << endl;
	cout << "转化为摄氏温度为 ：" << (F - 273.15) << endl;

	system("pause");

	return 0;
}