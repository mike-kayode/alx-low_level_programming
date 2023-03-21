#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - short description
 * @name: character
 * @owner: character
 * @age: integer
 * Description: Dog attribute
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

/*
 * dog_s - Typedef for dog
 */

typedef struct dog  dog_s;

void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_s *new_dog(char *name, float age, char *owner);
void free_dog(dog_s *d);
#endif
