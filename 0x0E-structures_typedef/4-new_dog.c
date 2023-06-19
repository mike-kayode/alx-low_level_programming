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
	size_t name_len;
	size_t owner_len;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog_t *new_dog =(dog_t:)malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_len = strlen(name);
	owner_len = strlen(owner);

	new_dog->name = (char*)malloc(name_len + 1);
	new_dog->owner = (char*)malloc(owner_len + 1);
	
	if (new-dog->name == NULL || new_dog-> == NULL)
{
	free(new_dog->name);
	free(new_dog->owner);
	free(new_dog);
	return (NULL);
}
strncpy(new_dog->name, name, name_len);
strncpy(new_dog->owner, owner, owner_len);

new_dog->name[name_len] = '\0';
new_dog->owner[owner_len] = '\0';

new_dog->age = age;
return (new_dog);
}
