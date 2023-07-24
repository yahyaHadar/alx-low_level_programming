#include "main.h"

/**
 * _strlen - return the lenght of a string
 *
 * @s: string paramater input
 *
 * Return: lenght of a string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
