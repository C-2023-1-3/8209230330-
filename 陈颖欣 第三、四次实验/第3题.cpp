#include<iostream>
using namespace std;
#include"mytemperature.h"

int main3() {

	int choice;
	double temperature;

	cout << "������һ���¶� ��" << endl;
	cin >> temperature;

	cout << "����������Ҫ��ת����ʽ ��" << endl;
	cout << "tip ��1. �������϶ȵ����϶�" << endl;
	cout << "      2. �����϶ȵ����϶�" << endl;

	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Celsius ��" << temperature << endl;
		cout << "Fahrenheit ��" << celsius_to_fah(temperature) << endl;
		break;
	case 2:
		cout << "Fahrenheit ��" << temperature << endl;
		cout << "Celsius ��" << fahrenheit_to_cels(temperature) << endl;
		break;
	default:
		cout << "�������ѡ������ ��" << endl;
		break;
	}

	/* cout << "Celsius   Fahrenheit" << endl;
	cout << " 40.0    " << celsius_to_fah(40.0) << endl;
	cout << " 39.0    " << celsius_to_fah(39.0) << endl;
	cout << " 31.0    " << celsius_to_fah(31.0) << endl;

	cout << "Fahrenheit   Celsius" << endl;
	cout << " 120.0    " << fahrenheit_to_cels(120.0) << endl;
	cout << " 110.0    " << fahrenheit_to_cels(110.0) << endl;
	cout << " 30.0    " << fahrenheit_to_cels(30.0) << endl; */

	system("pause");

	return 0;
}