#include "lists.h"

/**
 * sum_listint - sums all the numbes in a list
 *
 * @head: pointer to first list element
 *
 * Return: sum or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	
	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
