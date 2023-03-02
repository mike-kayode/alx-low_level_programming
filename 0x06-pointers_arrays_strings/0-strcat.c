#include "main.h"

/**
 * char *_strcat - function that concatenates two strings
 * @dest: string to be apended
 * @src: string to append
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
