#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: pointer
 * @index: index to change
 *
 * Return: 1 if it works, -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
        unsigned long int P;
		
        if (index > 64)
       	return (-1);

	for (P = 1; index > 0; index--, P *= 2)
		;
	*n += P;

	return (1);
}
