#include "lists.h"
#include <stddef.h>

/**
 * print_list - function that print all element
 * @h: pointer
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[5] %s\n", current->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		current = current->next;
		count++;
	}
	return (count);
}
