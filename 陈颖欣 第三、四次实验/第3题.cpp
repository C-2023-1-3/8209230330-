#include<iostream>
using namespace std;
#include"mytemperature.h"

int main3() {

	int choice;
	double temperature;

	cout << "请输入一个温度 ：" << endl;
	cin >> temperature;

	cout << "请输入您需要的转换方式 ：" << endl;
	cout << "tip ：1. 代表摄氏度到华氏度" << endl;
	cout << "      2. 代表华氏度到摄氏度" << endl;

	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Celsius ：" << temperature << endl;
		cout << "Fahrenheit ：" << celsius_to_fah(temperature) << endl;
		break;
	case 2:
		cout << "Fahrenheit ：" << temperature << endl;
		cout << "Celsius ：" << fahrenheit_to_cels(temperature) << endl;
		break;
	default:
		cout << "您输入的选项有误 ！" << endl;
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