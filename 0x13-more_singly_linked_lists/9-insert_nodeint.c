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
	unsigned int pos, len = 0;
	listint_t *get_len = *head, *current = *head, *new_node;

	while (get_len != NULL)
	{
		len++;
		get_len = get_len->next;
	}
	if (idx > (len - 1))
		return (NULL);
	for (pos = 0; pos != (idx - 1); pos++)
		current = current->next;
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
