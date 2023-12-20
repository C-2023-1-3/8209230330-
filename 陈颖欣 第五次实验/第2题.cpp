#include<iostream>
using namespace std;
#include"student.h"

// 增加一个对数据成员赋初值的成员函数set_value

int main2() {

	Student stud;                //定义对象

	stud.set_value();

	Student stud1(007, "tcg", 'm');

	cout << "stud.display()如下 ：" << endl;
	stud.display(); //执行stud对象的display函数
	cout << endl;

	cout << "stud1.display()如下 ：" << endl;
	stud1.display();

	system("pause");

	return 0;
}