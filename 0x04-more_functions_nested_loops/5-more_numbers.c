#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times using _putchar 3 times only
 *
 * Return: Alwyas 0 (Success)
*/

void more_numbers(void)
{
	int w, x;

	for (w = 1; w <= 10; w++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
				_putchar('1');
			_putchar (x % 10 + '0');
		}
		_putchar('\n');
	}
}

