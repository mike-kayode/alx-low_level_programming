#include <stdio.h>

/**
 * print_array - function that pint n elements of an array of integer
 * @n: number of the element of the array to be printed
 * @a: integer number
 * return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}

