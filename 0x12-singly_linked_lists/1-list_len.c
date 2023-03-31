#include <stddef.h>
#include "lists.h"

/**
 * list_len - function that return no. of element
 * @h: integer
 * Return: no, of element
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
