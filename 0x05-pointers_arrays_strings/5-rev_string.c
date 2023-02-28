#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: pointer to the string
 * return: void
 */

void rev_string(char *s)
{
	int x = 0, y = 0;

	char temp;

	while (s[y + 1] != '\0')
		y++;

	while (x < y)
	{
		temp = s[x];
		s[x] = s[y];
		s[y] = temp;
		x++;
		y--;
	}
}

