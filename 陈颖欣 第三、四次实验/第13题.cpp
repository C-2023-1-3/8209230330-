#include<iostream>
using namespace std;

void sortNum(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		int min = i;

		for (int j = i + 1; j < len; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}

		if (min != i)
		{
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
}

int main13() {

	int m_size;
	int num;

	cout << "����������Ҫ��Ԫ�ظ��� ��";
	cin >> m_size;

	int* arr = new int[m_size];

	cout << "�����������еĸ���Ԫ�� ��" << endl;
	for (int i = 0; i < m_size; i++)
	{
		cin >> num;
		arr[i] = num;
	}

	cout << "����ǰ ��";
	for (int* p = arr; p < arr + m_size; p++)
	{
		cout << *p << "  ";
	}
	cout << endl;

	sortNum(arr, m_size);

	cout << "����� ��";
	for (int* p = arr; p < arr + m_size; p++)
	{
		cout << *p << "  ";
	}
	cout << endl;

	delete[] arr;

	system("pause");

	return 0;
}