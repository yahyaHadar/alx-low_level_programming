#include "lists.h"

/**
 * listint_len - print a linked list
 *
 * @h: pointer of first node
 *
 * Return: size of list
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
