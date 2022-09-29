#include "lists.h"

/**
 * dlistint_len - get number of elements in dlist
 *
 * @h: pointer to the head of a dllist
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
