#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * char *string_nconcat - function that concatenates two strings
 * @s1: first character
 * @s2: second character
 * @n: integer
 * Return: success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	size_t s1_len;
	size_t s2_len;
	size_t new_len;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	new_len = s1_len + (n < s2_len ? n : s2_len);

	new_str = malloc((new_len + 1) * sizeof(char));
	if (!new_str)
	{
		return (NULL);
	}
	memcpy(new_str, s1, s1_len);
	memcpy(new_str + s1_len, s2, n < s2_len ? n : s2_len);
	new_str[new_len] = '\0';
	return (new_str);
}
