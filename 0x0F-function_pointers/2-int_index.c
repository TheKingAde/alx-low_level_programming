#include "function_pointers.h"
/**
 * int_index - Searches 4 an integer
 * @array: array of numbers
 * @size: size of array
 * @cmp: func pointer
 *
 * Return: -1 if success otherwise fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (1);
		}
	}
	return (-1);
}
