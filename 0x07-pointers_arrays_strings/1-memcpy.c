#include "main.h"
#include <string.h>

/**
 * _memcpy - Entry
 * @dest: destination
 * @src: source
 * @n: unsigned integer
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
