#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer to a pointer
 * @n: integer
 *
 * Return: new_addr
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_addr;
	listint_t *current;

	new_addr = malloc(sizeof(listint_t));
	if (new_addr == NULL)
		return (NULL);

	new_addr->n = n;
	new_addr->next = NULL;

	if (*head == NULL)
	{
		*head = new_addr;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_addr;
	}
	return (new_addr);
}
