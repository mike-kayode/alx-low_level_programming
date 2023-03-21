#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize a dog
 * @d: A dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: owner of the dog
 * Return: Succes
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
