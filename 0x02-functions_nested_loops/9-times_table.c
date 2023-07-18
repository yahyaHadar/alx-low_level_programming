#include "main.h"

/**
 * times_table - Prints the 9 times table.
*/

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0'); /* Print the initial 0 */
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(','); /* Print the comma spectator */
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' '); /* Add space for single degit */
			else
				_putchar((prod / 10) + '0'); /* Print the tens digit */

			_putchar((prod % 10) + '0'); /* Print the ones digit */
		}
		_putchar('\n'); /* Move the next row */
	}
}
