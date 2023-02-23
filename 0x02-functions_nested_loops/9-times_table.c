#include "main.h"

/**
 * times_table - print multiplication table
 */

void times_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if (product < 10)
			{
				_putchar (product + '0');
			}
			else
			{
				_putchar (product / 10 + '0');
				_putchar (product % 10 + '0');
			}
			if (j < 9)
			{
				_putchar (',');
				_putchar (' ');
				if (i * (j + 1) < 10)
				{
					_putchar (' ');
				}
			}
		}
		_putchar('\n');
	}
}

