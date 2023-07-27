#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in a list
 * @h: pointer
 *
 * Return: the number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;
	
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
