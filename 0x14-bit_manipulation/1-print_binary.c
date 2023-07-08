#include <stdio.h>

/**
 * print_binary - function that prints the binary rep of a No.
 * @n : integer
 * Return : success
 */

void print_binary(unsigned long int n)
{
	int num;

	if(n == 0)
	{
		printf("0");
		return;
	}
	num = sizeof(unsigned long int) * 8 - 1;
	while ((n >> num) == 0)
	{
		num--;
	}
	while (num >= 0)
	{
		unsigned long int mask = 1UL << num;
		if (n & mask)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		num--;
	}
}
