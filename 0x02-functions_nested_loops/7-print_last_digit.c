#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int c = n % 10;

	if (c < 0)
	{
		c = -c;
	}
	_putchar(c + '0');
	return (c);
}
