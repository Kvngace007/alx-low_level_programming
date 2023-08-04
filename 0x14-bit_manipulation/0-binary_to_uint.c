#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the string containing the binary number
 *
 * Return the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int tot_val = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		tot_val = 2 * tot_val + (b[i] - '0');
	}

	return (tot_val);
