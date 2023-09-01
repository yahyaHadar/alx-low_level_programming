#include "main.h"

/**
 * flip_bits - couts nmber of bits to change to get one to other
 *
 * @n: first number
 * @m: second nmber
 *
 * Return: number of bits to change
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int exclusive = n ^ m;

	while (exclusive)
	{
		if (exclusive & 1ul)
			count++;
		exclusive = exclusive >> 1;
	}

	return (count);
}
