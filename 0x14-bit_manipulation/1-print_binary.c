#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * @n: decimal number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int present;
	Int i, bit= 0;

	for (i = 1; i >= 0; i--)
	{
		present = n >> i;

		if (present & 1)
		{
			_putchar('1');
			count++;
		}
		else if (bit)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
