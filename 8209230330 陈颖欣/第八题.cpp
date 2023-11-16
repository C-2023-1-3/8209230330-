#include<iostream>
using namespace std;

int main() {

	int a, b, c;
	cout << "请输入三角形的三条边 ：" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "该三角形的周长为 ：" << (a + b + c) << endl;
		if (a == b || a == c || c == b)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
		else
		{
			cout<<"该三角形不为等腰三角形" << endl; 
		}
	}
	else
	{
		cout << "您输入的三条边无法构成一个三角形" << endl;
	}


	system("pause");

	return 0;
}