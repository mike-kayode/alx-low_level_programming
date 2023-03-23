#include "function_pointers.h"

/**
 * print_name - Function that print name
 * @name: character strind
 * @f: pointer
 * Return: Success
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
