#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t
 * @head: pointer
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		*head = current->next;
		current->next = prev;
		prev = current;
		current = *head;
	}
	*head = prev;
	return (*head);
}
