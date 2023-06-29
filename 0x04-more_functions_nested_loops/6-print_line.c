#include "main.h"

/**
 * print_line - Entry
 * @n: length of line
 *
 * Return: 1 if success and 0 otherwise
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
