#include "lists.h"

/**
 * print_list - prints the values   singly linked list
 * @h: a pointer to the first node in the list.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t node_count;
	const list_t *current;

	node_count = 0;
	current = h;

	if (h == NULL)
	{
		return (0);
	}
	for (current = h; current != NULL; current = current->next)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		node_count++;
	}

	return (node_count);
}
