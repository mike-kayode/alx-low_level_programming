#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - Function that converts a binary number
 * @b: Character
 * Return: he converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; ++b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		bit = *b - '0';
		result = (result * 2) + bit;
	}
	return (result);
}
