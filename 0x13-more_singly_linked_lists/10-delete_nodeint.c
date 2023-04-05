#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer
 * @index: integer
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int x;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	prev = *head;
	current = (*head)->next;
	for (x = 1; x < index; x++)
	{
		if (current == NULL)
			return (-1);
		prev = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	prev->next = current->next;
	free(current);
	return (1);
}
