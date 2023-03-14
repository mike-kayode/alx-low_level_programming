#include "main.h"
#include <string.h>

/**
 * char *_strdup - a pointer to a newly allocated space in memory
 * @str: string character variable
 * Return: NULL
 */

char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	new_str = malloc(strlen(str) + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}
