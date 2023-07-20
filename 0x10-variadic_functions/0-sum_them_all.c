#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums up parameters
 * @n: first parameter
 *
 * Return: add total if sucess otherwise fail
 */
int sum_them_all(const unsigned int n, ...)
{
	int Addtotal = 0;
	unsigned int i;
	va_list parameters;

	if (n == 0)
		return (0);
	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		Addtotal += va_arg(parameters, int);
	}
	va_end(parameters);
	return (Addtotal);
}
