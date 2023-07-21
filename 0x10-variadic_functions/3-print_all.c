#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_character - prints character
 * @argument: argument
 *
 */
void print_character(va_list argument)
{
	int value;

	value = va_arg(argument, int);
	printf("%c", (char)value);
}
/**
 * print_integer - prits integer
 * @argument: Argument
 *
 */
void print_integer(va_list argument)
{
	int value;

	value = va_arg(argument, int);
	printf("%d", value);
}
/**
 * print_float - prints integer
 * @argument: argument
 *
 */
void print_float(va_list argument)
{
	double value;

	value = va_arg(argument, double);
	printf("%f", value);
}
/**
 * print_string - prints string
 * @argument: argument
 *
 */
void print_string(va_list argument)
{
	char *value;

	value = va_arg(argument, char *);
	printf("%s", (value ? value : "(nil)"));
}
/**
 * typedef - entry
 * @struct: typedefinition struct
 *
 */
typedef struct
{
	char *Argument;
	void (*printer)(va_list);
} printArgumentStruct;

/**
 * print_all - prints anything
 * @format: type of argument
 *
 */
void print_all(const char * const format, ...)
{
	va_list argument;
	int i, j;
	printArgumentStruct printArgument[] = {
		{"c", print_character },
		{"i", print_integer },
		{"f", print_float },
		{"s", print_string },
		{NULL, NULL }
	};

	va_start(argument, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*printArgument[j].Argument == format[i])
			{
				printf("%s", (i == 0 ? "" : ", "));
				printArgument[j].printer(argument);
				break;
			}
			j++;
		}
		i++;
	}
	va_end(argument);
	printf("\n");
}
