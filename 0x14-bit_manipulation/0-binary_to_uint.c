#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, conv;
	int dip;

	if (b == NULL)
		return (0);

	for (dip = 0; b[dip]; dip++)
	{
		if (b[dip] != '0' && b[dip] != '1')
			return (0);
	}

	for (conv = 1, total = 0, dip--; dip >= 0; dip--, conv *= 2)
	{
		if (b[dip] == '1')
			total += conv;
	}

	return (total);
}
