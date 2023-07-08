#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Sets the value of a bit
 * @n: First number
 * @m: Second number
 * Return: The number of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
        unsigned int count = 0;
	
	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
        }
        return (count);
}
