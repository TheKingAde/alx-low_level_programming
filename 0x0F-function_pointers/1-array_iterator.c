#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Entry
 * @array: Array
 * @size: size of array
 * @action: acting function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
