#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Entry
 * @b: addres to be allocated
 *
 * Return: pointer if success otherwise fail
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
