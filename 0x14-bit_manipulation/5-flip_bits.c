#include "main.h"
#include <stdlib.h>
/**
 * flip_bits - flips bits with one another
 * @n: number
 * @m: number
 *
 * Return: count if success, otherwise fail
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, num_bits;
	unsigned int count;
	int bit_n;
	int bit_m;

	num_bits = sizeof(unsigned long int) * 8;
	count = 0;

	for (i = 0; i < num_bits; i++)
	{
		bit_n = (n & (1UL << i)) != 0 ? 1 : 0;
		bit_m = (m & (1UL << i)) != 0 ? 1 : 0;

		if (bit_n != bit_m)
			count++;
	}
	return (count);
}
