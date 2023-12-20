#include<iostream>
using namespace std;

class point
{
private:
	int x;
	int y;

public:
	point()
	{
		this->x = 60;
		this->y = 80;
	}

	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}

	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};

int main5()
{
	point p;
	int i, j;

	cout << "请分别输入 i 和 j 的值 ：" << endl;
	cin >> i >> j;

	p.setPoint(i, j);

	p.display();

	system("pause");

	return 0;
}