#include "lists.h"

/**
 * listint_len - Return number of elements on lists
 *
 * @h: pointer to first element on list
 *
 * Return: Length of list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
