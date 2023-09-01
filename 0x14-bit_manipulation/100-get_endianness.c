#include "main.h"

/**
 * get_endianness - returns the endianness of the system
 *
 * Return: 0 for big, 1 for little
*/

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
