#include "main.h"

/**
 * binary - convert unsigned int to binary
 * @num: number to be converted
 * Return: void
*/
void binary(int num)
{
	if (num == 0)
		return;
	binary(num / 2);
	_putchar((num % 2) + '0');
}
/**
 * putbinary - convert unsigned int to binary
 * @num: number to be converted
 * Return: number of chars
*/
int putbinary(int num)
{
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	binary(num);
	while (num)
	{
		num /= 2;
		count++;
	}
	return (count);
}
