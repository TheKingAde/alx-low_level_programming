#include <stdio.h>

/**
 * print_array - prints the array
 * @array: array to be searched
 * @start: start of the array
 * @end: end of the array
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d", array[i]);
		if (i < end - 1)
			printf(", ");
		else
			printf("\n");
	}
}
/**
 * binary_search - searches for a value in a  array(binary search algorithm)
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched for
 *
 * Return: Index where value is located or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, end = size, mid;

	if (!array)
		return (-1);

	while (start < end)
	{
		print_array(array, start, end);
		mid = (start + end) / 2;
		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid;
		else
			return (mid);
	}
	return (-1);
}
