#include"mytemperature.h"

double celsius_to_fah(double cel) // �����¶ȵ������¶�
{
	return (cel * 9 / 5) + 32;
}

double fahrenheit_to_cels(double fah) // �����¶ȵ������¶�
{
	return (fah - 32) * 5 / 9;
}