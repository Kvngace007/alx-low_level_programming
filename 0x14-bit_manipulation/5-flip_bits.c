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
	
	unsigned long int present;
	Int i, value = 0;

 	present = n ^ m;

	
		while (present)
	{
		value++;
		present &= (present - 1);
	}

	return (value);
}
