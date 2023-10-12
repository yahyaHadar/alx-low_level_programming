#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at the index that given
 * 
 * @head: pointer to current head
 * @index: index of node to be return
 * 
 * Return: address of node at the index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (head)
	{
		if (idx == index)
			return (head);
		head = head->next;
		idx++;
	}
	return (NULL);
}