#include "main.h"

/**
 * _puts - Entry
 * @str: string of ch
 *
 * Return - if sucess and 0 otherwise
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
