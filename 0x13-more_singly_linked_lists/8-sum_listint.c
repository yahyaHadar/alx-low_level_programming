#include "lists.h"

/**
 * sum_listint - calculates the sum of data
 *
 * @head: first node in the linked list
 *
 * Return: resulting sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
