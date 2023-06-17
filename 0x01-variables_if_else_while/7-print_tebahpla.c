#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char rev_alphabets;

	for (rev_alphabets = 'z'; rev_alphabets >= 'a'; rev_alphabets--)
	{
		putchar(rev_alphabets);
	}
	putchar('\n');
	return (0);
}
