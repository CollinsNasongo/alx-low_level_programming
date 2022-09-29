#include "lists.h"

/**
 * free_dlistint - free a dlist
 * 
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *remove;
	if (head == NULL)
		return;
	while (current != NULL)
	{
		remove = current;
		current = current->next;
		free(remove);
	}
	free(current);
}
