#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a node at the edn of a lsit
 * @head: pointer to a pointer
 * @str: pointer
 *
 * Return: addr of newly added element if success 0 if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len, i;
	list_t *new_node;
	list_t *cur;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
		len++;
	new_node->str = malloc(sizeof(char) * (len + 1));
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	i = 0;
	for (i = 0; i <= len; i++)
	{
		new_node->str[i] = str[i];
	}
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		cur = *head;
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = new_node;
	}
	return (new_node);
}
