#include <stdio.h>

/**
 * get_bit - Function that return value
 * @n: integer
 * @index: integer II
 * Return: the value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	return ((n & mask) != 0);
}
