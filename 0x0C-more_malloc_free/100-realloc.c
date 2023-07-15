#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Entry
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 *
 * Return: char pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned char *old_ptr, *new_ptr_size;
	unsigned int i, min_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		old_ptr = (unsigned char *)ptr;
		new_ptr_size = (unsigned char *) new_ptr;

		min_size = old_size < new_size ? old_size : new_size;
		for (i = 0; i < min_size; i++)
			new_ptr_size[i] = old_ptr[i];

		free(ptr);
	}
	return (new_ptr);
}
