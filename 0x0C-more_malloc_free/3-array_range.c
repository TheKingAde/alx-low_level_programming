#include "main.h"
#include <stdlib.h>

/**
 * array_range - Range of array
 * @min: minimum
 * @max: max;
 *
 * Return: array (pointer)
 */
int *array_range(int min, int max)
{
	int *array;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min++;
	}
	return (array);
}
