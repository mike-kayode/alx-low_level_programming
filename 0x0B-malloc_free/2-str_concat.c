#include "main.h"
#include <string.h>

/**
 * char *str_concat - function that concatenates two strings
 * @s1: first variable string
 * @s2: second variable string
 * Return: Null
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1;
	size_t len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	result = (char *)malloc(len1 + len2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2 + 1);
	return (result);
}
