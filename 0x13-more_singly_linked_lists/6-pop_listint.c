#include "lists.h"

/*
 * pop_listint - delete head node of a list
 *
 * @head: pointer to pointer to the head of a list
 *
 * Return: the number n or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int num;

	if (*head == NULL)
		return (0);

	current = *head;
	num = (*head)->n;
	*head = (*head)->next;
	free(current);

	return (num);
}
