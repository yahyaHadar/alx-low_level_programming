#include "main.h"

/**
 * swap_int - swaps the values of two integers using two input parametres
 *
 * @a: input paramter 1
 * @b: input paramter 2
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
