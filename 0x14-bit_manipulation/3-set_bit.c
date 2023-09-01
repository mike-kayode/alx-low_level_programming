#include <stdio.h>
#include "main.h"

/**
 * set_bit - Sets the value of a bit\
 * @n: Pointer
 * @n: Integer
 * @index: Index of the bit
 * Return: 1 if it work
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
