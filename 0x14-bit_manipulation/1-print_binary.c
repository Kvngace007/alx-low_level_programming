#include "main.h"
#include <stdio.h>

/**
 * print_binary - print the binary representation of a number
 * @n: decimal number to print
 */
void print_binary(unsigned long int n)
{
	void print_binary(unsigned long int n)
{
	unsigned long int present;
	int i, value = 0;

	for (i = 64; i >= 0; i--)
	{
		present = n >> i;

		if (present & 1)
		{
			_putchar('1');
			value++;
		}
		else if (value)
			_putchar('0');
	}
	if (!value)
		_putchar('0');
}
