#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at a given index
 *
 * @head: pointer to pointer to the first element
 * @index: the index to delete
 *
 * Return: 1 if success otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *current = *head;
	unsigned int pos;

	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
		for (pos = 0; pos < (index - 1); pos++)
		{
			if (current->next == NULL)
				return (-1);
			current = current->next;
	}
	node = current->next;
	current->next = node->next;
	free(node);
	return (1);
}
