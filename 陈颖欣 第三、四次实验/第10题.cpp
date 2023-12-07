#include<iostream>
using namespace std;
#define Max 100
#define Letter 26

void count(const char s[], int counts[])
{
	for (int i = 0; i < Letter; i++)
	{
		counts[i] = 0;
	}

	for (int i = 0; i < Max && s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z') {
			counts[s[i] - 'a']++; // Ð¡Ð´×ÖÄ¸
		}
		else if (s[i] >= 'A' && s[i] <= 'Z') {
			counts[s[i] - 'A']++; // ´óÐ´×ÖÄ¸
		}
	}
}

void PrintTimes(int counts[])
{
	for (int i = 0; i < Letter; i++)
	{
		if (counts[i] != 0)
		{
			cout << (char)(i + 'a') << ": " << counts[i] << " times" << endl;
		}
	}
}

int main10() {

	char s[Max];
	int counts[Letter];

	cout << "ÇëÊäÈëÒ»´®×Ö·û £º" << endl;
	cin.getline(s, Max);

	count(s, counts);
	PrintTimes(counts);

	system("pause");

	return 0;
}