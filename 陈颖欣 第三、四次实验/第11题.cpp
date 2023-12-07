#include<iostream>
using namespace std;
#define Max 100

int indexof(const char* s1, const char* s2)
{
	int size1 = strlen(s1);
	int size2 = strlen(s2);
	bool flag = true;
	int pos;

	if (size1 > size2)
	{
		return -1;
	}

	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (s1[i] == s2[j])
			{
				pos = j;
				flag = true;

				for (int m = i + 1; m < size1 && j < size2 - 1; m++, j++)
				{
					if (s1[m] != s2[j + 1])
					{
						flag = false;
						break;
					}
				}

				if (flag == true && i != (size1 - 1))
				{
					return pos;
					break;
				}
			}
		}
	}
	return -1;
}

int main11() {

	char s1[Max];
	char s2[Max];

	cout << "请输入两个字符串 ：" << endl;
	cin >> s1;
	cin >> s2;

	int index = indexof(s1, s2);

	if (index != -1)
	{
		cout << "s1 为 s2 的子串，下标为 ：" << index << endl;
	}
	else
	{
		cout << "-1" << endl;
	}

	system("pause");

	return 0;
}