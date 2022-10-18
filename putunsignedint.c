#include "main.h"
/**
 * putunsignedint - print intger
 * @num: number to be printed
 * Return: number of chars
*/
int putunsignedint(unsigned int num)
{
	int count = 0;
	unsigned int tmp, tmpp;
	int i = 1;

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
	if (num == 0)
		count++;
	return (count);
}
