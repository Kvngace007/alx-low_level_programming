#include "main.h"

/**
 * get_bit - to return the value of a bit at an index 
 * @n: the number to search
 * @index: index
 *
 * Return the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	Int R-bit;

	if (index > 64)
		return (-1);

	R_bit = (n >> index) & 1;

	return (R_bit);
}
