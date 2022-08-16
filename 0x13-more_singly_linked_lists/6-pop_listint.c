#include "lists.h"

/**
 * pop_listint - deletes head node of a list
 *
 * @head: pointer to pointer to head node
 *
 * Return: the value n of the head of list or NULL if empty
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
