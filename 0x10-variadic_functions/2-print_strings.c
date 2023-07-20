#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	const char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, const char *);

		if (str != NULL)
			printf("%S", str);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}
