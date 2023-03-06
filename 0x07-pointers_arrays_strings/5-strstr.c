#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @needle: substring
 * @haystack: string
 * Return: to the substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	size_t needle_len = strlen(needle);

	while (*haystack)
	{
		if (strncmp(haystack, needle, needle_len) == 0)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
