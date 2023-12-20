#include<iostream>
using namespace std;

class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;

	int minute;

	int second;

public:
	void input() // 输入
	{
		cin >> this->hour;
		cin >> this->minute;
		cin >> this->second;
	}

	void output() // 输出
	{
		cout << this->hour << ":" << this->minute << ":" << this->second << endl;
	}
};

int main1()
{
	Time t1; //定义t1为Time类对象

	t1.input(); // 输入设定时间

	t1.output(); // 输出时间

	system("pause");

	return 0;
}