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
va_list strings;
char *str;
unsigned int index;

va_start(strings, n);

for (index = 0; index < n; index++)
{
str = va_arg(strings, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (index != (n - 1) && separator != NULL)
printf("%s", separator);		}

printf("\n");

va_end(strings);
}
