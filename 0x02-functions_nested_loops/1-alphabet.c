#include "main.h"

/**
 * print_alphabet - Utilizes the _putchar function to print
 *	the alphabet from 'a' to 'z'
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
