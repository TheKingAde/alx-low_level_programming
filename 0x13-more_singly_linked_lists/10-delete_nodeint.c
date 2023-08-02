#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to a pointer to the head
 * @index: index to be deleted
 *
 * Return: 1 if success, 0 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode;
	unsigned int count;
	listint_t *temp;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	currentNode = *head;
	count = 0;
	while (currentNode != NULL && count < index - 1)
	{
		currentNode = currentNode->next;
		count++;
	}

	if (currentNode == NULL || currentNode->next == NULL)
		return (-1);

	temp = currentNode->next;
	currentNode->next = currentNode->next->next;
	free(temp);

	return (1);
}
