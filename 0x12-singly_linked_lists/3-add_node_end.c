#include "lists.h"

/**
 * add_node_end - add new node to the end of a list
 *
 * @head: pointer to the head
 * @str: string to be stored in new node
 *
 * Return: address of new element or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *cpy = strdup(str);
	unsigned int len;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *end_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	if (cpy == NULL)
	{
		free(new_node);
		free(end_node);
		return (NULL);
	}

	for (len = 0; cpy[len] != '\0'; len++)
		;

	new_node->str = cpy;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		end_node = *head;
		while (end_node->next != NULL)
			end_node = end_node->next;
		end_node->next = new_node;
	}
	return (*head);
}
