#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: type of argument
 *
 */
void print_all(const char * const format, ...)
{
	va_list argument;
	char arg_type;
	int i;
	float f;
	char *s;

	va_start(argument, format);
	while (*format)
	{
		arg_type = *format;
		switch (arg_type)
		{
			case 'c':
				i = va_arg(argument, int);
				printf("%c", i);
				break;
			case 'i':
				i = va_arg(argument, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(argument, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(argument, char*);
				if (s == NULL)
				{
					printf("(nil)");
				} else
				{
					printf("%s", s);
				}
				break;
				default:
				break;
		}
		format++;
	}
	va_end(argument);
	printf("\n");
}
