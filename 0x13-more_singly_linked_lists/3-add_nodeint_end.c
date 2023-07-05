#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: pointer
 * @n: integer
 * Return: Null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first_node, *second;

	if (head == NULL)
		return (NULL);

	first_node = malloc(sizeof(listint_t));
	if (first_node == NULL)
		return (NULL);

	first_node->n =  n;
	first_node->next = NULL;

	if (*head == NULL)
	{
		*head = first_node;
	}
	else
	{
		second = *head;
		while (second->next != NULL)
			second = second->next;

		second->next = first_node;
	}
	return (first_node);
}
