#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int dec_num;

	if (index > 64)
		return (-1);

	dec_num = (n >> index) & 1;

	return (dec_num);
}
