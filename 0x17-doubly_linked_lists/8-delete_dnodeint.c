#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t.
 * @head: double pointer to head of the list
 * @index: index of the node that should be deleted, starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *next;
	unsigned int i;

	/* if list is empty */
	if (*head == NULL)
		return (-1);

	/* if head needs to be removed */
	if (index == 0)
	{
		*head = temp->next;   /* change head */
		if (*head != NULL)
			(*head)->prev = NULL;   /* remove prev link of new head */
		free(temp);               /* free old head */
		return (1);
	}

	/* find the node to be deleted, skipping the first node */
	for (i = 1; temp != NULL && i < index; i++)
		temp = temp->next;

	/* if position is more than number of nodes or temp is NULL */
	if (temp == NULL || temp->next == NULL)
		return (-1);

	/* save pointer to the next of node to be deleted */
	next = temp->next->next;

	/* unlink the node from linked list */
	free(temp->next);  /* free node */

	temp->next = next;  /* unlink the deleted node from list */

	if (next != NULL)
		next->prev = temp;  /* update prev link of next node */

	return (1);
}
