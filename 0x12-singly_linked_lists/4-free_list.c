#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{

	list_t *cur;

	while (head != NULL)
	{
		cur = head;
		head = head->next;
		free(cur->str);
		free(cur);
	}
}
