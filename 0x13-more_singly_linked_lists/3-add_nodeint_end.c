#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of list
 *
 * @head: pointer to first element of list
 * @n: the node to be added
 *
 * Return: address to new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *end_node = malloc(sizeof(listint_t));

	if (new_node == NULL || end_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		end_node = *head;

		while (end_node->next != NULL)
			end_node = end_node->next;
		end_node->next = new_node;
	}
	return (*head);
}
