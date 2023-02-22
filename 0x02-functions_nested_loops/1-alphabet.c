#include "main.h"

/**
 * print_alphabet- A programm that print alphabet in lowercase
 * Return: Always 0
 */

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
