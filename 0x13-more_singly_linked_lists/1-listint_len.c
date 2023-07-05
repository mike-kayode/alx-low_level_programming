#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: pointer
 * Return: success
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
