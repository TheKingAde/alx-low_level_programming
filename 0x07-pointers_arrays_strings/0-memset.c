#include <string.h>
#include "main.h"

/**
 * _memset - Entry
 * @s: string
 * @b: character
 * @n: unsigned integer
 *
 * Rturn: characters
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
