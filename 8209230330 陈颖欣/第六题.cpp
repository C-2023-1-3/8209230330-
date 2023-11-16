#include<iostream>
using namespace std;

int main() {

	//char cm1 = 'Z';
	//cout << (int)cm1 << endl; // 90

	//char cm2 = 'a';
	//cout << (int)cm2 << endl; // 97

	char c;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û £º" << endl;
	cin >> c;

	if ((int)c > 90)
	{
		cout << (char)((int)c - 32) << endl;
	}
	else
	{
		cout << (int)c + 1 << endl;
	}

	system("pause");

	return 0;
}