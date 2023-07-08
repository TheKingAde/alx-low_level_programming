#include "main.h"
#include <string.h>

/**
 * _strncat - Entry
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: dest if success otherwise if fail
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
