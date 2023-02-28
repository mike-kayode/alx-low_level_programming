#include "main.h"

/**
 * puts_half - print half of a string
 * @str: pointer to a string
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int i;

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len - 1) / 2 + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
