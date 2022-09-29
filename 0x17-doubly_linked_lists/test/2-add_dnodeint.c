#include "lists.h"

/**
 * add_dnodeint - add new node at beginning of dlist
 *
 * @head: double pointer to the head
 * @n: integer
 *
 * Return: address of new element of NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
