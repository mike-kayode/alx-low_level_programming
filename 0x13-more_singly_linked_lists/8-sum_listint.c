#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * @head: pointer
 * Return: zero
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
