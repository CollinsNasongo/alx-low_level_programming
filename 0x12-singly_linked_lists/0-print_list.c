#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 *
 * @h: pointer to the first node of the list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_num = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		node_num++;
		current = current->next;
	}

	return (node_num);
}
