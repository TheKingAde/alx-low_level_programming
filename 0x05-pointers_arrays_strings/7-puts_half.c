#include "main.h"

/**
 * puts_half - Entry into the function
 * @str: String
 *
 * Return: 1 if success and 0 otherwise
 */
void puts_half(char *str)
{
	int length = 0;
	int i, starting_i;

	while (str[length] != '\0')
		length++;
	if (length % 2 == 0)
		starting_i = length / 2;
	else
		starting_i = (length - 1) / 2;
	for (i = starting_i; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
