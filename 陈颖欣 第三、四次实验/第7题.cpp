#include<iostream>
using namespace std;

int main7() {

	bool arr[100];

	for (int i = 0; i < 100; i++)
	{
		arr[i] = false;
	}

	for (int j = 0; j < 100; j++)
	{
		for (int k = j; k < 100; k += j + 1)
		{
			if (arr[k])
			{
				arr[k] = false;
			}
			else
			{
				arr[k] = true;
			}
		}
	}

	cout << "开着的存物柜号码如下 ：" << endl;
	for (int i = 0; i < 100; i++)
	{
		if (arr[i])
		{
			cout << i + 1 << " ";
		}
	}
	cout << endl;

	system("pause");

	return 0;
}