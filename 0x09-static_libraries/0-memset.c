#include "main.h"
#include <stddef.h>

/**
 * _memset - Function that fill memory with a constant byte
 * @n: Pointer to s
 * @s: parameter to n
 * @b: contant byte
 * Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
