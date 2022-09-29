#include "lists.h"

unsigned int get_len(const dlistint_t *h);

/**
 * insert_dnodeint_at_index - insert new node at a given index
 *
 * @h: double pointer to the head
 * @idx: the index
 * @n: the number to be added
 *
 * Return: address of new node otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int count = 1;
	unsigned int len = get_len(*h);

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (len == idx)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (current)
	{
		if (idx == count)
		{
			new->n = n;
			new->prev = current;
			new->next = current->next;
			current->next->prev = new;
			current->next = new;
			return (new);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}

/**
 * get_len - get number of elements in dlist
 *
 * @h: pointer to the head of a dlist
 *
 * Return: number of elements
 */
unsigned int get_len(const dlistint_t *h)
{
	unsigned int nodes = 0;

	if (h == NULL)
		return (0);
	
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
