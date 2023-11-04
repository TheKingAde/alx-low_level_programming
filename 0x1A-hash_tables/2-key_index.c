#include "hash_tables.h"

/**
 * key_index - Get the index for a key in a hash table
 * @key: The key to find the index for
 * @size: The size of the hash table's array
 *
 * Return: The index where the key/value pair should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);

	/* Calculate the index using the modulo operation with the array size */
	return (hash_value % size);
}
