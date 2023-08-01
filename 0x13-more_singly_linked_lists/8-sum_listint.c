#include "lists.h"

/**
 * sum_listint - returns the sum of all data
 * @head: pointer to the head
 *
 * Return: sum if sucess otherwise if fail
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
