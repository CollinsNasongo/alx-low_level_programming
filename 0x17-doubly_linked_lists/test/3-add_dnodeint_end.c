#include "lists.h"

/**
 * add_dnodeint_end - add new node at end of dlist
 *
 * @head: double pointer to the head
 * @n: integer
 *
 * Return: address of new element of NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while(current->next != NULL)
		current = current->next;
	current->next = new;
	new->prev = current;

	return (new);
}
