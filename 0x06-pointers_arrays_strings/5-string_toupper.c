#include "main.h"
#include <string.h>

/**
 * string_toupper - function that changes all lowercase letters touppercase
 * @s: string to manipulate
 * Return: Success
 */

char *string_toupper(char *s)
{
	int i = 0
		;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	return (s);
}
