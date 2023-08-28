#include "lists.h"

/**
 * add_nodeint - adds a node to first of a linekd list
 *
 * @head: pointer to the first node in the list
 * @n: value to insert in nw mode
 *
 * Return: pointer to new mode
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
