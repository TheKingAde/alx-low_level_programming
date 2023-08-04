#include "main.h"
#include <stdlib.h>
/**
 * get_bit - gets a bit at a particular index
 * @n: number
 * @index: index/position
 *
 * Return: bit if success, -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num_bits;
	unsigned long int mask;
	int bit;

	num_bits = sizeof(unsigned long int) * 8;
	if (index >= num_bits)
		return (-1);
	mask = 1UL << index;
	bit = (n & mask) != 0 ? 1 : 0;
	return (bit);
}
