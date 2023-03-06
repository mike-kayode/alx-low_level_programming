#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: first string
 * @accept: second string
 * Return: Pointer to the byte in s that match accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
