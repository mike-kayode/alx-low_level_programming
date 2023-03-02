#include "main.h"
#include <string.h>

/**
 * char *_strncat - function that concatenates two strings
 * @dest: 
 * @src: 
 * @n: interger
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int boy = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[boy + i] = src[i];
	dest[boy] = '\0';
       return (dest);
}       
