#include <stdio.h>

/**
 * print_binary - function that prints the binary rep of a No.
 * @n : integer
 * Return : success
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	unsigned long int num_bits = sizeof(unsigned long int) * 8;

	for (i = 1UL << (num_bits - 1); i > 0; i >>= 1)
	{
		if (n & i)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
}
