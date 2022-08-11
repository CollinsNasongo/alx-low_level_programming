#include "lists.h"

list_t *add_nde(list_t **head, const char *str);

/**
 * add_node - a function that adds new node to the beginning of list
 *
 * @head: the current head of the list
 * @str: the string to be added to the beginning
 *
 * Return: pointer to the head
 */
list_t *add_node(list_t **head, const char *str)
{
	char *cpy = strdup(str);
	unsigned int len = strlen(cpy);
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	if (cpy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = cpy;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
