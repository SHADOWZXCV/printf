#include "main.h"

/**
 * putstr - prints a full string
 * @str: the string to be printed.
 * Return: number of characters.
*/
int putstr(char *str)
{
	int count = 0;

	if (!str)
		return (putstr("(null)"));

	while (*str)
	{
		_putchar(*(str++));
		count++;
	}
	return (count);
}
