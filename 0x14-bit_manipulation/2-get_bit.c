#include "main.h"
#include <stdio.h>

/**
 * get_bit - to return the value of a bit at an index 
 * @n: the number to search
 * @index: index
 *
 * Return the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int R_bit;

	if (index > 64)
		return (-1);

	R_bit = n >> index;

	return (R_bit & 1);
}
