#include "main.h"

/**
 * clear_bit - clears bit at the index
 *
 * @n: the num to index
 * @index: bit to clear
 *
 * Return: 1 if succ or -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
