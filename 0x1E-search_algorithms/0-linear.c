#include <stdio.h>

/**
 * linear_search - searches for a value in a array using linear search
 * @array: pointer to the array
 * @size: size of the array to be searched
 * @value: the value to search for
 *
 * Return: Index where value is found or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
