#include<iostream>
using namespace std;

void bubbleSort(double arr[])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main6() {

	double arr[10] = { 1.1, 4.2, 2.3, 8.9, 0.2, 5.6, 7.2, 1.3, 3.6, 9.5 };

	cout << "ÅÅÐòÇ° £º";
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	bubbleSort(arr);

	cout << "ÅÅÐòºó £º";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	system("pause");

	return 0;
}