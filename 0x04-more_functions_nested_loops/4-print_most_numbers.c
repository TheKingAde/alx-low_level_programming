#include "main.h"

/**
 * print_most_numbers - Entry
 *
 * Return: 1 if success and 0 otherwise
 */
void print_most_numbers(void)
{
	int result;

	for (result = 0; result <= 9; result++)
	{
	if (result != 2 && result != 4)
		_putchar(result + '0');
	}
	_putchar('\n');
}
