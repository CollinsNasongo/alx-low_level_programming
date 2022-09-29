#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlist
 *
 * @h: pointer to the head of a dlist
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
