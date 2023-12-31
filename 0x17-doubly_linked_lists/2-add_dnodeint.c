#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer to head of the list
 * @n: data to insert in the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* allocate node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	/* put in the data  */
	new_node->n = n;

	/* make next of new node as head and previous as NULL */
	new_node->next = (*head);
	new_node->prev = NULL;

	/* change prev of head node to new node */
	if ((*head) != NULL)
		(*head)->prev = new_node;
	/* move the head to point to the new node */
	(*head) = new_node;

	return (new_node);
}
