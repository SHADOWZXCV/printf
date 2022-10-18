#include "main.h"

/**
 * Hexa - convert unsigned int to binary
 * @num: number to be converted
 * Return: void
*/
void Hexa(unsigned int num)
{
	if (num == 0)
		return;
	Hexa(num / 16);
	if (num % 16 >= 10)
	{
		_putchar((num % 16) - 10 + 'A');
	}
	else
	{
		_putchar((num % 16) + '0');
	}
}
/**
 * putUhexa - convert unsigned int to binary
 * @num: number to be converted
 * Return: number of chars
*/
int putUhexa(unsigned int num)
{
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	Hexa(num);
	while (num)
	{
		num /= 16;
		count++;
	}
	return (count);
}
