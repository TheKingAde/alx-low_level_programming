#include "main.h"
#include <stdio.h>

/**
 * print_diagsum - Entry
 * @a: array
 * @size: size of array
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sumI = 0;
	int sumII = 0;

	for (i = 0; i < size; i++)
	{
		sumI += a[i * size + i];
		sumII += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sumI, sumII);
}
