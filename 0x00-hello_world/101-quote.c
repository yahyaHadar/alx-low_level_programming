#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: A C program that prints a line to the standard error
 *
 * Return: Always 1 (erro)
 */

int main(void)
{
	char quo[] = "and that place of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quo, 59);
	return (1);
}
