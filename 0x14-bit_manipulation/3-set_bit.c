#include "main.h"
#include <stdlib.h>
/**
 * set_bit - sets a bit at an index to 1
 * @n: bit
 * @index: index
 *
 * Return: 1 if success, -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_bits;
	unsigned long int mask;

	num_bits = sizeof(unsigned long int) * 8;
	if (index >= num_bits)
		return (-1);
	mask = 1UL << index;

	*n = *n | mask;
	return (1);
}
