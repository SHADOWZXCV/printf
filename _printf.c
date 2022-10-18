#include "main.h"
#include <stdio.h>

int checkCases(va_list *args, int *printCount, const char *format);

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

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*(format))
	{
		if (*(format) != '%')
		{
			_putchar(*(format++));
			printCount++;
			continue;
		}

		result = checkCases(&args, &printCount, ++format);

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
int checkCases(va_list *args, int *printCount, const char *format)
{

	switch (*(format))
	{
		case 'c':
			_putchar(va_arg(*args, int));
			(*printCount)++;
			break;
		case 's':
			{
				*printCount += putstr(va_arg(*args, char*));
			}
			break;
		case 'd':

			*(printCount) += putint(va_arg(*args, int));
			break;
		case 'i':
			*(printCount) += putint(va_arg(*args, int));
			break;
		case 'b':
			*(printCount) += putbinary(va_arg(*args, int));
			break;
		case 'u':
			*(printCount) += putunsignedint(va_arg(*args, int));
			break;
		case 'o':
			*(printCount) += putuoctal(va_arg(*args, int));
			break;
		case 'x':
			*(printCount) += putuhexa(va_arg(*args, int));
			break;
		case 'X':
			*(printCount) += putUhexa(va_arg(*args, int));
			break;
		case '\0':
			_putchar('%');
			(*printCount)++;
			return (-1);
		case '%':
			_putchar(*(format));
			(*printCount)++;
			break;
		default:
			_putchar('%');
			_putchar(*(format));
			(*printCount) += 2;
			break;
		}

		return (0);
}
