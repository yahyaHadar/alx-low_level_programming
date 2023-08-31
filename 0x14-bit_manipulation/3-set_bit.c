#include "main.h"

/**
 * set_bit - sets bit at tindex
 *
 * @n: the number to index
 * @index: the bit to set
 *
 * Return: succful 1 or, -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
