#include "main.h"
#include <string.h>

/**
 * char *argstostr - function that concatenates all the arguments
 * @ac: first integer to be concentated
 * @av: second integer to concentated
 * Return: null
 */

char *argstostr(int ac, char **av)
{
	int total_len = 0;
	int current_pos = 0;
	int i;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}
	result = malloc(total_len * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(result + current_pos, av[i]);
		current_pos += strlen(av[i]);
		result[current_pos++] = '\n';
	}
	result[current_pos] = '\0';
	return (result);
}
