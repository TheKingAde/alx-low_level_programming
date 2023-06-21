#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
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
