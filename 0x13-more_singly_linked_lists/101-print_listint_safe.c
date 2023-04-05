#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer
 * Return: the number of the node
 */

size_t print_listint_safe(const listint_t *head)
{
	lintint_t *slow = head, *fast = head;
	size_t count = 0, x;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			count++;
			for (x = 0; head != NULL && x < count; x++)
			{
				printf("[%p} %d\n", (void *)head, head->n);
				head = head->next;
			}

			if (head == NULL)
				exit(98);

			slow = head;
			fast = head;
		}
	}
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		count++;
	}
	return (count);
}
