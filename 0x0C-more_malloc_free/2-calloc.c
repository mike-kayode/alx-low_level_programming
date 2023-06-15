#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory
 * @nmemb: unsigned integer
 * @size: unsigned integer
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		memset(ptr, 0, nmemb * size);
	}
	return (ptr);
}
