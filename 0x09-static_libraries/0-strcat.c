#include "main.h"
#include <string.h>

/**
 * _strcat - Entry
 * @dest: String
 * @src: String
 *
 * Return: dest if success otherwise if fail
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
