#include "main.h"

/**
 * putReverseStr - prints a full string in reverse
 * @str: the string to be printed.
 * @count: number of characters before printing.
 * Return: number of characters after printing.
*/
void putReverseStr(char *str, int *count)
{
	char temp;

	if (!str)
	{
		*count += putstr("(null)");
		return;
	}

	if (!*str)
		return;

	temp = *str;
	(*count)++;

	putReverseStr(++str, count);
	_putchar(temp);

}
