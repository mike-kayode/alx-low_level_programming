#include "main.h"

/**
 * swap_int - Function that swaps the value of two integers
 * @a: first integer
 * @b: second integer
 * return: success
 */

void swap_int(int *a, int *b)
{
	int cat = *a;
	*a = *b;
	*b = cat;
}
