#include "main.h"

/**
 * octal - convert unsigned int to binary
 * @num: number to be converted
 * Return: void
*/
void octal(unsigned int num)
{
	if (num == 0)
		return;
	octal(num / 8);
	_putchar((num % 8) + '0');
}
/**
 * putuoctal - convert unsigned int to binary
 * @num: number to be converted
 * Return: number of chars
*/
int putuoctal(unsigned int num)
{
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	octal(num);
	while (num)
	{
		num /= 8;
		count++;
	}
	return (count);
}
