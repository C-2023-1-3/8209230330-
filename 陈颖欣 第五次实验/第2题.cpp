#include<iostream>
using namespace std;
#include"student.h"

// ����һ�������ݳ�Ա����ֵ�ĳ�Ա����set_value

int main2() {

	Student stud;                //�������

	stud.set_value();

	Student stud1(007, "tcg", 'm');

	cout << "stud.display()���� ��" << endl;
	stud.display(); //ִ��stud�����display����
	cout << endl;

	cout << "stud1.display()���� ��" << endl;
	stud1.display();

	system("pause");

	return 0;
}