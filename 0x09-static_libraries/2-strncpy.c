#include "main.h"
#include <string.h>

/**
 * _strncpy - Entry
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: dest if success otherwise if fail
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
