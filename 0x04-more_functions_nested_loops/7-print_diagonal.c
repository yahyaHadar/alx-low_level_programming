#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n : is the number of times the \ charachter should be printed
*/

void print_diagonal(int n)
{
	int posi, space;

	if (n <= 0)
		_pucthar('\n');
	else
	{
		for (posi = 1; posi <= n; posi++)
		{
			for (space = 1; space <= posi; space++)
				_putchar(' ');
			_putchar('/');
			_pucthar('\n');
		}
	}
}
