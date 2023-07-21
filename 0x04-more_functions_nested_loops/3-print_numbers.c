#include "main.h"

/**
 * print_numbers - print 0-9
 *
 * return: alwyas 0 (success)
*/

void print_numbers(void)
{
	int nmbr = 0;

	do {
		_putchar(nmbr + 48);
		nmbr++;
	} while (nmbr >= 0 && nmbr <= 9);
	_putchar('\n');
}
