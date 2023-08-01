#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the head
 * @index: index of node
 *
 * Return: NULL if success otherwise if fail
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head != NULL)
	{
		if (counter == index)
			return (head);

		head = head->next;
		counter++;
	}
	return (NULL);
}
