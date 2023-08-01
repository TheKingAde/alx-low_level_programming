#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a node at the beginning of the list
 * @head: head pointer to pointer
 * @n: integer
 *
 * Return: new_addr
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_addr;

	/* allocate space for the new node */
	new_addr = malloc(sizeof(listint_t));
	if (new_addr == NULL)
		return (NULL);

	new_addr->n = n;
	new_addr->next= *head;
	*head = new_addr;

	return (new_addr);
}
