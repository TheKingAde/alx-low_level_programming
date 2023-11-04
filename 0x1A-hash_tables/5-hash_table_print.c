#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table.
 * @ht: The hash table to be printed.
 *
 * Description: This function prints the keys and values of the hash table
 * in the order that they appear in the array, followed by the linked list
 * elements for collision handling.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int printed = 0;

	if (ht == NULL)
	return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			printed = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
