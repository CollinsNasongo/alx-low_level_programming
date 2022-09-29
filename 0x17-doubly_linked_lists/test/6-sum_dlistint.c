#include "lists.h"

/**
 * sum_dlistint - get sum of all integers in dlist
 *
 * @head: pointer to the head of list
 *
 * Return: sum or 0 when dlist is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (0);
	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
