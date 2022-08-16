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
	unsigned int len = 0, pos = 0;
	listint_t *current = head;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		len++;
		current = current->next;
	}

	if (index > len)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		if (index != pos)
		{
			pos++;
			current = current->next;
		}
	}
	return (current);
}
