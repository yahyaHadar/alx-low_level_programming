#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes
 *
 * @file: name of the file buffer is storing chars
 *
 * Return: pointer to new buffer
*/

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - closes file
 *
 * @fb: the file descriptor to be closed
*/

void close_file(int fb)
{
	int e;

	e = close(fb);

	if (e == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fb %d\n", fb);
		exit(100);
	}
}

/**
 * main - copes the contents of a file to other file
 *
 * @argc: the number of argument supplied to prgm
 * @argv: an array of pointers to arguments
 *
 * Return: 0 on success
 *
 * Description: argument count uncorrect -exit code 97
 * or file_from does not exist or not able to read - exit code 98
 * if file_to cannot be created or written - exit code 99
 * if file_to or file_from cannot be closed - exit code 100
*/

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
