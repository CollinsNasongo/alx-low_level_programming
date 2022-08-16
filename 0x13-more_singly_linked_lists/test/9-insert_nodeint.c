#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at given position
 *
 * @idx: the index at which node is to be inserted
 * @n: the interger stored at the new node
 * @head: pointer to pointer to the 1st element of list
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = malloc(sizeof(listint_t));
	unsigned int pos;

	if (*head == NULL)
		return (NULL);
	current = *head;
	new_node = *head;
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (new_node);
	}
	for (pos = 0; pos < idx - 1; pos++)
	{
		if (current == NULL || current->next == NULL)
			return (NULL);
		current = current->next;
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
