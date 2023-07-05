#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer
 * @index: integer
 * Return: null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;
	for (x = 0; x < index; x++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}
	return (current);
}
