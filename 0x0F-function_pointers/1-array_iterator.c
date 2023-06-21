#include "function_pointers.h"

/**
 * array_iterator - Function that execute function
 * @array: An array
 * @size: size of the memory
 * @action: funtionto act upon
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

