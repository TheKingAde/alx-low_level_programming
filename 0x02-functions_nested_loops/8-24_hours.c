#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Computes the absolute value of an integer
 *
 * Return: every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr < 24; hr++)
	{
	for (min = 0; min < 60; min++)
	{
		putchar((hr / 10) + '0');
		putchar((hr % 10) + '0');
		putchar(':');
		putchar((min / 10) + '0');
		putchar((min % 10) + '0');
		putchar('\n');
	}
	}
}
