#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print last digit of a number
 * @n: The number
 *
 * Return: The last digit of a number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	last_digit *= -1;
	putchar(last_digit + '0');
	putchar('\n');
	return (0);
}
