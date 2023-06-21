#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int alphabets;

	for (alphabets = 97; alphabets <= 122; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
}
