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

	for (i = 0; str[i] != '\0'; i += 2)
	{
		if(isprint(str[i]))
		_putchar(str[i]);
	}
	_putchar('\n');
}
