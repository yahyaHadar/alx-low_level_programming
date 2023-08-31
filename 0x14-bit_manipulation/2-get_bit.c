#include "main.h"

/**
 * get_bit - gets the bit
 *
 * @n: the number to index
 * @index: bit to get
 *
 * Return: value of bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
