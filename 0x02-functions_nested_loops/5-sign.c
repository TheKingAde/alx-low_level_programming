#include "main.h"

/**
 * print_sign - prints ths sign of a number
 * @n: the number to check
 *
 * return: 1 and prints '+' if n is greater than zero,
 * prints '0' if n is zero
 * and prints '-' if n is less than zero
 *
 */
int print_sign(int n)
{
	int result;

	if(n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	} else {
		_putchar('-');
		result = -1;
	}
	return (result);
}
