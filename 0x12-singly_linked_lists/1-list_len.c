#include "lists.h"

/**
 * list_len - get the number of elements in a linked list
 *
 * @h: pointer to the first list element
 *
 * Return: the length of a list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}

	return (len);
}
