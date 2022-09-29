#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of dlist
 *
 * @head: pointer to the head of dlist
 * @idx: the index to get element from
 *
 * Return: nth node or NULL if doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (node->next == NULL && count != index)
			return (NULL);
		if (count != index)
		{
			node = node->next;
			count++;
		}
		else if (count == index)
			return (node);
	}
	return (NULL);
}
