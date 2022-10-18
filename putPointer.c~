#include "main.h"

static unsigned long _pow(unsigned int base, unsigned int exponent);
/**
 * putPointer - prints an address in memory
 * @address: the address.
 * Return: number of characters.
*/
int putPointer(unsigned long address)
{
	int count = 0;
	unsigned int a[16];
	unsigned int i, sum;
	unsigned long n = address, m;

	if (!address)
	{
		putstr("(nil)");

		return (count);
	}

	_putchar('0');
	_putchar('x');
	count = 2;
	m = _pow(16, 15);
	a[0] = n / m;

	for (i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + ('a' - ':') + a[i]);
			count++;
		}
	}

	return (count);
}

/**
 * _pow - calculates an exponent
 * @base: base of exponent
 * @exponent: exponent of number
 *
 * Return: base ^ exponent
 */
static unsigned long _pow(unsigned int base, unsigned int exponent)
{
	unsigned int i;
	unsigned long ans = base;

	for (i = 1; i < exponent; i++)
	{
		ans *= base;
	}
	return (ans);
}
