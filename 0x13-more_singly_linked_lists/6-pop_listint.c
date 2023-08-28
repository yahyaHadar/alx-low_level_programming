#include "lists.h"

/**
 * pop_listint - pops head node list
 *
 * @head: adress of pointer to 1 node
 *
 * Return: dat inside deleted elements or 0
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;

	return (n);
}
