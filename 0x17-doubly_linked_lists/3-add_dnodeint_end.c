#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: double pointer to head of the list
 * @n: data to insert in the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last = *head;

	/* allocate node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* put in the data  */
	new_node->n = n;

	/* this new node is going to be the last node, so make next of it as NULL*/
	new_node->next = NULL;

	/* if the Linked List is empty, then make the new node as head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* else traverse till the last node */
	while (last->next != NULL)
		last = last->next;

	/* change the next of last node */
	last->next = new_node;

	/* make last node as previous of new node */
	new_node->prev = last;

	return (new_node);
}
