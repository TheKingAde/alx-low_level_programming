#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * _atoi - Entry into the function
 * @s: string to be converted
 *
 * Return: atoi(s) if success and otherwise if fail
 */
int _atoi(char *s)
{
	while (isspace(*s))
		s++;
	while (*s == '+' || *s == '-')
		s++;
	return (atoi(s));
}
