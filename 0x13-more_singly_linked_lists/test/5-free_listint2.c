#include "lists.h"

/**
 * free_listint2 - frees a list
 *
 * @head: pointer to pointer to the head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	head = NULL;
}
