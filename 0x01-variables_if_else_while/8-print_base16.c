#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int A;

	for (A = 0; A < 10; A++)
	{
		putchar(A + '0');
	}
	for (A = 0; A < 6; A++)
	{
		putchar(A + 'a');
	}
	putchar('\n');
	return (0);
}
