#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a node at a particular point on the list
 * @head: pointer to a pointer to the head
 * @idx: index;
 * @n: integer/item
 *
 * Return: newNode if success otherwise fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *currentNode;
	unsigned int count = 0;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	currentNode = *head;
	for (count = 0; count < idx - 1 && currentNode != NULL; count++)
	{
		currentNode = currentNode->next;
	}
	if (currentNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
		newNode->next = currentNode->next;
		currentNode->next = newNode;
	return (newNode);
}
