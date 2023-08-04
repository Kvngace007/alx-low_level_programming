#include "main.h"
#include <stdio.h>

/**
 * flip_bits - to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return the number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int chag;
	int value;

	chag = n ^ m;
	value = 0;

	while (chag)
	{
		value++;
		chag &= (chag - 1);
	}

	return (value);
}
