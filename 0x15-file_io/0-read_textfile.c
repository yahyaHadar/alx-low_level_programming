#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text from a file and prints
 *
 * @filename: name of file to read
 * @letters: number of bytes to read
 *
 * Return: number of bytes to read or printe
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bu;
	ssize_t fb;
	ssize_t e;
	ssize_t f;

	fb = open(filename, O_RDONLY);
	if (fb == -1)
		return (0);
	bu = malloc(sizeof(char) * letters);
	f = read(fb, bu, letters);
	e = write(STDOUT_FILENO, bu, f);

	free(bu);
	close(fb);
	return (e);
}
