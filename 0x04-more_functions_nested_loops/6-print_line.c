#include "main.h"

/**
 * print_line- Function that draw a straight line in the terminal
 * @n: integer
 * return: Always 0
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
