#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - function that print number
* @separator: string to be printed
* @n: integer
* Return: success
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;

if (n > 0)
{
va_start(valist, n);
for (i = 0; i <= n; i++)
{
printf("%d", va_arg(valist, int));
if (i != n && separator != NULL)
	printf("%s", separator);
}
va_end(valist);
}
printf("\n");
}
