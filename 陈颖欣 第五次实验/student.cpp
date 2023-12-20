#include"student.h"

Student::Student(int num1, string name1, char sex1)
{
    this->num = num1;
    
    this->name = name1;

    this->sex = sex1;
}

void Student::display()
{
    cout << "num: " << num << endl;

    cout << "name: " << name << endl;

    cout << "sex: " << sex << endl;
}

void Student::set_value()
{
    this->num = 0;

    this->name = "0";

    this->sex = '0';
}