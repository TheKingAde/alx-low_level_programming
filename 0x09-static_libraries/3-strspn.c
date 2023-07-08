#include "main.h"
#include <string.h>

/**
 * _strspn - Entry
 * @s: string
 * @accept: string
 *
 * Return: strspn if positive otherwise fail
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
