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

	while (str[i] != '\0' && str[i + 1] != '\0')
	{
		_putchar(str[i]);
		_putchar(str[i + 1]);
		i += 2;
	}
	_putchar('\n');
}
