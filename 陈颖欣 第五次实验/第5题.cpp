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

	cout << "��ֱ����� i �� j ��ֵ ��" << endl;
	cin >> i >> j;

	p.setPoint(i, j);

	p.display();

	system("pause");

	return 0;
}