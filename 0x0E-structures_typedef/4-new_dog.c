#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * dog_t *new_dog - function that create a new dog
 * @name: character
 * @age: age of the dog
 * @owner: owner's name
 * Return: NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t* new_dog;
	char* new_name;
	char* new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog =(dog_t*)malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_name = (char*)malloc(strlen(name) + 1);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_owner = (char*)malloc(strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_name, name);
	strcpy(new_owner, owner);
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
