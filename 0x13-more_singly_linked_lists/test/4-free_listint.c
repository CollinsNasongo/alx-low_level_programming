#include "lists.h"

/**
 * free_listint - frees a list
 *
 * @head: pointer to first element of list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	current = head;

	while (current)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
