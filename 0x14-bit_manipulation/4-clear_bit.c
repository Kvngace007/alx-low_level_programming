#include "main.h"
#include <stdio.h>

/**
 * clear_bit - to set the value of a given bit 
 * @n: pointer to a dec. number to change
 * @index: index of the bit to change
 *
 * Return: 1 if it works and return -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	dec = index;
	for (i = 1; hold > 0; i *= 2, dec--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
