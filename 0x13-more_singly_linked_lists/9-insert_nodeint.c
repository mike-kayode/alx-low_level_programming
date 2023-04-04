#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: pointer
 * @idx: integer
 * @n: integer
 * Return: Null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new_node, *current;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	for (x = 0; x < idx - 1; x++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
