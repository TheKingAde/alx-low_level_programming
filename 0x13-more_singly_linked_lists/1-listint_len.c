#include "lists.h"
#include <stddef.h>

/**
 * listint_len - return the number or items in a list
 * @h: pointer to the head of the list
 *
 * Return: counter
 */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
