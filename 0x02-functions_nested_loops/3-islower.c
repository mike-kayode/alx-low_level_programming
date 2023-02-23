#include "main.h"

/**
 * _islower- check for lower character
 * @c: character to check
 * Return: 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
