#include "main.h"

/**
 * print_triangle- function that print a triangle
 * size is the size of the triangle
 * return: Always 0
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= 1; j++)
		{
			for (k = 1; k <= i; k++)

			_putchar('#');
		}
		_putchar('\n');
	}
}
