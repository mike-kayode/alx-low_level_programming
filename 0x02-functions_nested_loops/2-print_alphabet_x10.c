#include "main.h"

/**
 * print_alphabet_x10- A proram that print the alphabet in lowercase
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
