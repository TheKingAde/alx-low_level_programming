#include "main.h"

/**
 * print_diagonal - Prints diagonal
 * @n: number of diagonals to be printed
 *
 * Return: 1 if success 0 otherwise
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{	
		_putchar(' ');
	}
	}
		_putchar('\\');
		_putchar('\n');
}
