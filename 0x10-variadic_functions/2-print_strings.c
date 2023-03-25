#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that print string
 * @separator: string
 * @n: integer
 * Return: success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *y;

	if (n > 0)
	{
		va_start(valist, n);
	for (i = 0; i <= n; i++)
	{
		y = va_arg(valist, char *);
		if (y == NULL)
			printf("(ni1)");
		else
			printf("%s", y);
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	va_end(valist);
	}
	printf("\n");
}
