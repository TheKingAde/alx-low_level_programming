#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Entry
 * @nmemb: array of elements
 * @size: size of array in bytes
 *
 * Return: pointer if success otherwise fail
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;
	unsigned int t_size, i;
	unsigned char *byte_pointer;

	/* check if nmemb or size is zero */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	t_size = nmemb * size;
	/* creates memory */
	pointer = malloc(nmemb * size);

	/* check if malloc fails */
	if (pointer == NULL)
	{
		return (NULL);
	}

	byte_pointer = pointer;
	t_size = nmemb * size;

	for (i = 0; i < t_size; i++)
	{
		byte_pointer[i] = 0;
	}
	return ((void *)pointer);
}
