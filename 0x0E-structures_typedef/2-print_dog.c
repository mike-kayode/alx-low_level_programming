#include <stdio.h>
#include "dog.h"

/**
 * print_dog: function that print structure
 * @dog: string
 * @d: array
 * Return: Success
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name != NULL ? d->name : "(nill)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
