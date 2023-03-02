#include "main.h"
#include <string.h>

/**
 * char *_strncat - function that concatenates two strings
 * @dest: string to be apended
 * @src: string to append
 * @n: interger
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
