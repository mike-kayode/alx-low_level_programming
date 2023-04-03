#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * @head: pointer
 * @n: interger constant
 * Return: null if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_node;

	if (head == NULL)
		return (NULL);

	first_node = malloc(sizeof(listint_t));
	if (first_node == NULL)
		return (NULL);

	first_node->n = n;
	first_node->next = *head;
	*head = first_node;
	return (first_node);
}
