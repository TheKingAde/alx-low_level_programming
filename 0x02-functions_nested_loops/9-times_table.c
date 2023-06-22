#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: 9 times table, starting with 0
 */

void times_table(void)
{
	int row, column, times;

	for (row = 0; row < 10; row++)
	{
	for (column = 0; column < 10; column++)
	{
		times = row * column;
		if (column == 0)
		{
		_putchar(times + '0');
		}
		if (times < 10 && column != '0')
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(times + '0');
		}
		else if (times >= 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar((times / 10) + '0');
			_putchar((times % 10) + '0');
		}
	}
		_putchar('\n');
	}
}
