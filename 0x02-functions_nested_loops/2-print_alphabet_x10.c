#include <stdio.h>

/**
 * main - Entry point
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
		putchar('b');
	}
		putchar('\n');
	}
}
