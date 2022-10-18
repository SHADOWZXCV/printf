#include "main.h"

/**
 * putS - prints a full string
 * @str: the string to be printed.
 * Return: number of characters.
*/
int putS(char *str)
{
	int count = 0;
	int tmp;

	if (!str)
		return (putstr("(null)"));

	while (*str)
	{
		tmp = *(str++);
		if ((tmp > 0 && tmp < 32) || (tmp >= 127))
		{
			putstr("\\x");
			if (tmp < 16)
			{
				_putchar('0');
			}
			putUhexa(tmp);
			count += 3;
		}
		else
		{
			_putchar(tmp);
			count++;
		}
	}
	return (count);
}
