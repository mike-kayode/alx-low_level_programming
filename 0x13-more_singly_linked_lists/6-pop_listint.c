#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: pointer
 * Return: zero
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int boy;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	boy = temp->n;
	free(temp);
	return (boy);
}
