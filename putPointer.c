#include "main.h"

/**
 * putPointer - prints an address in memory
 * @address: the address.
 * Return: number of characters.
*/
int putPointer(unsigned long address)
{
	int count = 0;

	if (!address)
	{
		return (putstr("(nil)"));
	}

	_putchar('0');
	_putchar('x');
	count = 2;
	count += putuhexa(address);
	return (count);
}
