#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: separator
 * @n: number of integers passed
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	int number;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(numbers, int);
		printf("%d", number);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);
	printf("\n");
}
