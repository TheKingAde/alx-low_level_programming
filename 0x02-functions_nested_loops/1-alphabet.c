#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int alphabets;

	for (alphabets = 97; alphabets <= 122; alphabets++)
	{
		_putchar(alphabets);
	}
	_putchar('\n');
}
