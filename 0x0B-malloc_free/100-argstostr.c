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
	size_t total_len = 0;
	size_t current_pos = 0;
	size_t len;
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
	result = (char *)malloc((total_len + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		memcpy(result + current_pos, av[i], len);
		current_pos += len;
		result[current_pos++] = '\n';
	}
	result[total_len] = '\0';
	return (result);
}
