#include "main.h"

/**
 * is_palindrome - function that return 1
 * @s: character string
 * Return: Return 0, 1 if a string is palindrome
 */

int is_palidrome(char *s)
{
	int len = strlen(s);
	int i, j;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
