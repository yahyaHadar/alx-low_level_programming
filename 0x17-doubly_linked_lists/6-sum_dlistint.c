#include "lists.h"

/**
 * sum_dlistint - sums all the data N
 *
 * @head: head of the list
 *
 * Return: head of the list
*/

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
