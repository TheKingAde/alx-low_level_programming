#include "main.h"
#include <stdbool.h>
#include <stdlib.h>
/**
 * print_binary - prints binary rep of int
 * @n: integer
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int num_bit, i;
	unsigned long int mask;
	bool first_one_found;
	int bit;

	num_bit = sizeof(unsigned long int) * 8;
	mask = 1UL << (num_bit - 1);
	first_one_found = false;

	for (i = 0; i < num_bit; i++)
	{
		bit = (n & mask) != 0 ? 1 : 0;
		if (bit == 1)
			first_one_found = true;
		if (first_one_found)
			_putchar(bit + '0');
		mask = mask >> 1;
	}
	if (!first_one_found)
		_putchar('0');
}
