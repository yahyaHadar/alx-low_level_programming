#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 *
 * @s: string to evaluate
 *
 * Return: number of words
*/

int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}
/**
 * **strtow - splits a string into words
 *
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success) or null (Error)
*/

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, wrds, e = 0, start, end;

	while (*(str + len))
		len++;
	wrds = count_word(str);
	if (wrds == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (wrds + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (e)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (e + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ == str[start++];
				*tmp = '\0';
				matrix[k] = tmp - e;
				k++;
				e = 0;
			}
		}
		else if (e++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
