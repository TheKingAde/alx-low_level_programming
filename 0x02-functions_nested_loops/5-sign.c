#include "main.h"

/**
 * print_sign - Entry point
 * @n: the number to check
 *
 * Return: result
 *
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	} else
	{
		_putchar('-');
		result = -1;
	}
	return (result);
}
