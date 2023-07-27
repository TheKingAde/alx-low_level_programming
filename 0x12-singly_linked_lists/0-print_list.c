#include "lists.h"
#include <stdio.h>
/**
 * print_list: prints a list of singly linked list
 * @h: pointer
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t number = 0;
	
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		number++;
	}
	return (number);
}
