#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string whose lenght is to be found
 * return: lenght of a strng
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
