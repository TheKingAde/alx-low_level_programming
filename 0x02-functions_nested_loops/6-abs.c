#include "main.h"
#include <stdio.h>
/**
 * _abs - Entry point
 * @n: The integer to be computed
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-n);
	} else
	{
		return (n);
	}
}
