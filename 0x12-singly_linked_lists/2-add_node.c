#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that add a new node
 * @str: string
 * @head: character
 * Return: address of the element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
