#include <stdio.h>
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
	list_t *new_node;
	char *new_str;

	if (str == NULL)
	return (NULL);
	
	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	return (NULL);

	new_str = strdup(str);
	if (new_str == NULL)
		free(new_node);
	return (NULL);

	new_node->str = new_str;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
