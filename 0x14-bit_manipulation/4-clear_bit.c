#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bit
 * @n: Pointer
 * @index: Index of the number
 * Return: The number of bit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;
	mask = ~mask;
	*n &= mask;
	return (1);
}
