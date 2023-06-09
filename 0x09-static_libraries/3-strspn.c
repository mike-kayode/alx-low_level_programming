#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: segment
 * @accept: second segment
 * Return: Number byte in the segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p = accept;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				len++;
				break;
			}
			p++;
		}
		if (*p == '\0')
		{
			return (len);
		}
		s++;
		}
	return (len);
}
