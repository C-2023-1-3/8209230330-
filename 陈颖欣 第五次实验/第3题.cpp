#include<iostream>
using namespace std;

class Cuboid
{
public:
	int length;
	int width;
	int height;

	void input()
	{
		cout << "请输入长方体的长 ：";
		cin >> this->length;

		cout << "请输入长方体的宽 ：";
		cin >> this->width;

		cout << "请输入长方体的高 ：";
		cin >> this->height;
	}

	int calculate()
	{
		return this->length * this->width * this->height;
	}

	void output()
	{
		cout << "长方体的体积为 ：" << this->calculate() << endl;
	}
};

int main3() {

	Cuboid c1;
	c1.input();
	c1.output();
	cout << endl;

	Cuboid c2;
	c2.input();
	c2.output();
	cout << endl;

	Cuboid c3;
	c3.input();
	c3.output();
	cout << endl;

	system("pause");

	return 0;
}