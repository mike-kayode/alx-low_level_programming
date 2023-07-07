#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number
 * @b : character
 * Return : the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}

	size_t length = strlen(b);
	unsigned int result = 0;
	unsigned int bit_value = 1;
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '0')
		{

		}
		else if (b[i] == '1')
		{
			return += bit_value;
		}
		else
		{
			return (0);
		}
		bit_value *= 2;
	}
	return (result);
}
