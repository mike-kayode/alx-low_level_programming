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
	unsigned int xyz;

		va_start(valist, n);

		for (xyz = 0; xyz < n; xyz++)
		{
			printf("%d", va_arg(valist, int));

			if (xyz != (n - 1) && separator != NULL)
				printf("%s", separator);
		}

		printf("\n");

		va_end(valist);
	}
