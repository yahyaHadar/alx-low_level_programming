#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - create a file
 *
 * @filename: a pointer to name of file to create
 * @text_content: pointer to a string to write to file
 *
 * Return: -1 succeeds
*/

int create_file(const char *filename, char *text_content)
{
	int fb, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	fb = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fb == -1)
		return (-1);

	if (len > 0)
	{
		ssize_t e = write(fb, text_content, len);

		if (e == -1)
		{
			close(fb);
			return (-1);
		}
	}

	close(fb);
	return (1);
}