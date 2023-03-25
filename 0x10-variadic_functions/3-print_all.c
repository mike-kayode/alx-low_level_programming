#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: argument function
 * @c: character
 * @i: integer
 * @f: float
 * @s: string of characer
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list arg_list;
	va_start(arg_list, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
						printf("%s%c", sep, va_arg(arg_list, int));
						break;
					case 'i':
						printf("%s%d", sep, va_arg(arg_list, int));
						break;
					case 'f':
						printf("%s%f", sep, va_arg(arg_list, double));
						break;
					case 's':
						str = va_arg(arg_list, char *);
						if (!str)
							str = "(nil)";
						printf("%s%s", sep, str);
						break;
					default:
						i++;
						continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(arg_list);
}
