#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to a pointer to the head
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
