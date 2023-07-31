#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_recursive - print integers
 * @n: integers
 *
 */
void print_recursive(int n)
{
	if (n == 0)
		return;
	print_recursive(n / 10);
	_putchar((n % 10) + '0');
}
/**
 * print_listint - prints the content of a list
 * @h: pointter to the head
 *
 * Return: counter
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	int num;

	while (h != NULL)
	{
		num = h->n;

		/* if negative */
		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}

		if (num == 0)
		{
			_putchar('0');
			_putchar('\n');
			counter++;
			h = h->next;
			continue;
		}
		print_recursive(num);
		_putchar('\n');
		counter++;
		h = h->next;
	}
	return (counter);
}
