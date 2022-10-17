#include "main.h"
#include <stdio.h>

int checkCases(va_list args, int *printCount, const char *format);

/**
 * _printf - prints a string with a specific format to stdout
 * @format: the formatted string.
 * Return: if successful, returns the number of chars printed,
 * otherwise, -1 is returned.
 */
int _printf(const char *format, ...)
{
	int printCount = 0, result;
	va_list args;

	va_start(args, format);

	while (*(format))
	{
		if (*(format) != '%')
		{
			_putchar(*(format++));
			printCount++;
			continue;
		}

		result = checkCases(args, &printCount, ++format);

		if (result == -1)
			return (printCount);

		format++;
	}

	return (printCount);
}

/**
 * checkCases - prints according to specified format
 * @args: the format variables.
 * @printCount: characters printed counter
 * @format: the formatted string.
 * Return: if successful, returns 0, otherwise, -1 is returned.
 */
int checkCases(va_list args, int *printCount, const char *format)
{
	char *str;

	switch (*(format))
	{
		case 'c':
			_putchar(va_arg(args, int));
			(*printCount)++;
			break;
		case 's':
			{
				str = va_arg(args, char*);
				*printCount += putstr(str);
			}
			break;
		case '\0':
			return (-1);
		case '%':
			_putchar(*(format));
			(*printCount)++;
			break;
		default:
			_putchar('%');
			_putchar(*(format));
			(*printCount)++;
			break;
		}

		return (0);
}
