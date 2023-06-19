#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that end
 * @d: array
 * @dog_t: array
 * Return: Success
 */

void free_dog(dog_t* d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
