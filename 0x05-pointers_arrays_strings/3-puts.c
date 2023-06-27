#include "main.h"

/**
 * _puts - Entry
 * @str: string
 *
 * Return: string if success and otherwise if fail
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
