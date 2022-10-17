#include "main.h"
/**
 * putint - print intger
 * @num: number to be printed
 * Return: number of chars
*/
int putint(int num)
{
	int count = 0;
	int tmp, tmpp, sign;
	int i = 1;
	char *intmin = "-2147483648";

	if (num == INT_MIN)
	{
		return (putstr(intmin));
	}
	sign = num < 0 ? 1 : 0;
	if (sign)
	{
		num *= -1;
		_putchar('-');
	}
	tmp = num;
	while (tmp)
	{
		tmp /= 10;
		count++;
	}
	tmp = 1;
	while (i < count)
	{
		tmp *= 10;
		i++;
	}
	while (tmp)
	{
		tmpp = num;
		tmpp /= tmp;
		_putchar((tmpp % 10) + '0');
		tmp /= 10;
	}
	if (sign || num == 0)
		count++;
	return (count);
}
