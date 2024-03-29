#include "lists.h"

/**
 * add_nodeint - add new node at the begining of list
 *
 * @head: pointer to first element of list
 * @n: the node to be added
 *
 * Return: address to new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	else
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
