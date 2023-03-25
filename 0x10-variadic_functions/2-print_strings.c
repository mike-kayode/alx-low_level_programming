#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that print string
 * @separator: string
 * @n: integer
 * @...: varable to be printed
 *
 * Description: If seperator NULL, do not print
 *              If one of string is NULL, (ni1) is printed.
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
			printf("(nil)");
		else
			printf("%s", y);
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	va_end(valist);
	}
	printf("\n");
}
