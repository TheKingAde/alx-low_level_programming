#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - sets a bit at a particular index to 0
 * @n: pointer to the bits
 * @index: index
 *
 * Return: 1 if success, 0 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_bits;
	unsigned long int mask;

	num_bits = sizeof(unsigned long int) * 8;
	if (index >= num_bits)
		return (-1);
	mask = ~(1UL << index);
	*n = *n & mask;

	return (1);
}
