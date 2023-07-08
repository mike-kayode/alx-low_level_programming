#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n : integer
 * @index : integer II
 * Return : the value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	unsigned long int mask = 1UL << index;
	unsigned long int bit = n & mask;

	if (bit != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
