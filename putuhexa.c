#include "main.h"

/**
 * hexa - convert unsigned int to binary
 * @num: number to be converted
 * Return: void
*/
void hexa(unsigned int num)
{
	if (num == 0)
		return;
	hexa(num / 16);
	if (num % 16 >= 10)
	{
		_putchar((num % 16) - 10 + 'a');
	}
	else
	{
		_putchar((num % 16) + '0');
	}
}
/**
 * putuhexa - convert unsigned int to binary
 * @num: number to be converted
 * Return: number of chars
*/
int putuhexa(unsigned int num)
{
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	hexa(num);
	while (num)
	{
		num /= 16;
		count++;
	}
	return (count);
}
