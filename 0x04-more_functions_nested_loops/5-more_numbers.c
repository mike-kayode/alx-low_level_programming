#include "main.h"

/**
 * void more_numbers- function that print 10 times the number from 0 to 14
 * return: ALways 0
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
