#include <stdio.h>

/**
 * main - print largest prime factor of 612852475143
 * Return: 0 on success
 */

int main(void)
{
	long int n = 612852475143;
	long int i;

	for (i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	if (n > 1)
	{
		printf("%ld\n", n);
	}
	return (0);
}
