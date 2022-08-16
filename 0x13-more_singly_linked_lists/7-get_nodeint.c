#include "lists.h"

/**
 * get_nodeint_at_index - get node at index n
 *
 * @head: pointer to first element of list
 * @index: the position of the element
 *
 * Return: NULL if node not present or the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int pos;

	for (pos = 0; pos != index; pos++)
	{
		if (head == NULL)
			return (NULL):
		head = head->next;
	}
	return (head);
}
