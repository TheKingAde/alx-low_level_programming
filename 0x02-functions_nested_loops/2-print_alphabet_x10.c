#include <stdio.h>

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a, b;
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	for (a = 0; a < 10; a++)
	{
	for (b = 0; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}
		_putchar('\n');
	}
}
