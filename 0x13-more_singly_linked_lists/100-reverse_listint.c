#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: pointer to a pointer to the head
 *
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *current;

	prev = NULL;

	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}
	*head = prev;
	return (*head);
}
