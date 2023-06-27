#include "main.h"
#include <stdio.h>
/**
 * print_rev - Entry
 * @s: string
 *
 * Return: string if success and otherwise if fail
 */
void print_rev(char *s)
{
	int i, length;
	i = 0;
	length = 0;

	while (s[length] != '\0')
		length++;
	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
