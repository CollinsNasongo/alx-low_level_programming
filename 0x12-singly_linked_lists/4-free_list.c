#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 *
 * @head: pointer to first element
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	current = head;
	while (current)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
