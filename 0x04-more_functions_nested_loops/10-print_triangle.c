#include "main.h"

/**
 * print_triangle- function that print a triangle
 * size is the size of the triangle
 * return: Always 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= 1; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
