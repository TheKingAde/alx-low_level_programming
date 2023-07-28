#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - return the length of string
 * @str: string
 *
 * Return: length of string
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}
/**
 * add_node - adds a node at the start of a linked list
 * @head: a pointer to a pointer
 * @str: pointer
 *
 * Return: addr of new element if success NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
