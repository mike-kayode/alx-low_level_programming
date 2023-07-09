#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Check the endianness
 * Return: 0 if big endian
 */

int get_endianness(void)
{
	unsigned int value = 1;
	char *byte = (char *)&value;

	return ((int)*byte);
}
