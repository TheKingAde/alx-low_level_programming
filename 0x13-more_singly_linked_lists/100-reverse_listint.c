#include "lists.h"
/**
 * reverse_listint_recursive - reverse listint_t recursive
 * @current: head's current position
 *
 * Return: Recursive
 */
listint_t *reverse_listint_recursive(listint_t *current, listint_t *prev)
{
	listint_t *next;

	if (current == NULL)
	{
		return (prev);
	}
	next = current->next;
	current->next = prev;

	return (reverse_listint_recursive(next, current));
}
/**
 * reverse_listint - reverse a linked list
 * @head: pointer to a pointer to the head
 *
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (NULL);
	}

	*head = reverse_listint_recursive(*head, NULL);
	return (*head);
}
