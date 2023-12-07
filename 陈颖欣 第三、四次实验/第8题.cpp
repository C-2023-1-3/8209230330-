#include<iostream>
using namespace std;
#define Max 80

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0;
	int j = 0;
	int count = 0;

	while (i < size1 && j < size2)
	{
		if (list1[i] < list2[j])
		{
			list3[count] = list1[i];
			i++;
			count++;
		}
		else if (list1[i] >= list2[j])
		{
			list3[count] = list2[j];
			j++;
			count++;
		}
	}

	if (i < size1)
	{
		for (int m = i; m < size1; m++)
		{
			list3[count] = list1[m];
			count++;
		}
	}
	else
	{
		for (int m = j; m < size2; m++)
		{
			list3[count] = list2[m];
			count++;
		}
	}
}

void myPrint(int arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main8() {

	int size1, size2, num;
	int arr1[Max], arr2[Max];

	cout << "���������뿪�ٵ� ����1 �Ĵ�С ��" << endl;
	cin >> size1;

	cout << "������" << size1 << "���� ��" << endl;
	cout << "tip ������Ҫ��������Ŷ ��" << endl;
	for (int i = 0; i < size1; i++)
	{
		cin >> num;
		arr1[i] = num;
	}

	cout << "���������뿪�ٵ� ����2 �Ĵ�С ��" << endl;
	cin >> size2;

	cout << "������" << size2 << "���� ��" << endl;
	cout << "tip ������Ҫ��������Ŷ ��" << endl;
	for (int i = 0; i < size2; i++)
	{
		cin >> num;
		arr2[i] = num;
	}

	system("cls");

	cout << "����1 ����������� ��";
	myPrint(arr1, size1);
	cout << "����2 ����������� ��";
	myPrint(arr2, size2);

	int dest[Max];
	
	merge(arr1, size1, arr2, size2, dest);

	cout << "�ϲ������� ����������� ��";
	myPrint(dest, size1 + size2);

	system("pause");

	return 0;
}