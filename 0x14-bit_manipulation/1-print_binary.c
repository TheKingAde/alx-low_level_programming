#include "main.h"

/**
 * print_binary - prints the binary rep of a number
 * @n: num to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	char c;

	if (n > 1)
		print_binary(n >> 1);

	c = (n & 1) + '0';

	return (write(STDOUT_FILENO, &c, 1));
}
