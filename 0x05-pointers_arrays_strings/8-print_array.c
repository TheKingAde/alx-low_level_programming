#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry
 * @a: pointer
 * @n: number of elements
 *
 * Return: 1 if success and 0 otherwise
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	if (i != n - 1)
		printf(", ");
	}
	printf("\n");
}
