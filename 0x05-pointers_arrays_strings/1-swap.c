#include "stdio.h"

/**
 * swap_int - swaps integers
 * @a: integer
 * @b: integer
 *
 * Return - 1 if success and 0 otherwise
 */
void swap_int(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
