#pragma once
#include<iostream>
using namespace std;

class Student      
{
public:      
	Student(){}

	Student(int num1, string name1, char sex1);

	void display();

	void set_value();

private:
	int num;

	string name;

	char sex;
};