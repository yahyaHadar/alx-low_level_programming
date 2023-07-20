#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 *	numbers that are multi of 3 print fizz
 *	numbers that are multi of 5 print buzz
 *	numbers that are multi of 3 and 5 print FizzBuzz
 *	separated by space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int nmbr;

	for (nmbr = 1; nmbr <= 100; nmbr++)
	{
		if (nmbr % 3 == 0 && !(nmbr % 5 == 0))
			printf("Fizz");
		else if (nmbr % 5 == 0 && !(nmbr % 3 == 0))
			printf("Buzz");
		else if (nmbr % 3 == 0 && nmbr % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", nmbr);

		if (nmbr != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
