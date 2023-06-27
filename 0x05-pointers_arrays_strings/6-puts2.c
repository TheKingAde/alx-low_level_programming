#include "main.h"
#include <ctype.h>

/**
 * puts2 - Entry
 * @str: string
 *
 * Return: 1 if success and 0 otherwise
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
