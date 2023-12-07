#include<iostream>
using namespace std;

int main5() {

	int arr[10];
	int distinct[10];
	int count = 0;
	bool flag; // ±Í÷æ

	for (int i = 0; i < 10; i++)
	{
		flag = true;

		cin >> arr[i];

		for (int j = 0; j < count; j++)
		{
			if (arr[i] == distinct[j])
			{
				flag = false;
				break;
			}
		}

		if (flag)
		{
			distinct[count] = arr[i];
			count++;
		}
	}

	for (int i = 0; i < count; i++)
	{
		cout << distinct[i] << "  ";
	}
	cout << endl;

	system("pause");

	return 0;
}