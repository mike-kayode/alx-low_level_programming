#include "main.h"

/**
 * is_palindrome - function that return 1
 * @s: character string
 * Return: Return 0, 1 if a string is palindrome
 */

int is_palidrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	if (s[0] != s[len -1])
	{
		return (0);
	}
	s[len - 1] = '\0';
	return (is_palindrome(s + 1);
			}
