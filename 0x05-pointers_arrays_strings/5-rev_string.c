#include "main.h"
#include <string.h>

/**
 * rev_string - Entry
 * @s: string
 *
 * Return: 1 if success and 0 otherwise
 */
void rev_string(char *s)
{
	int i, j;
	char temp;
	int length = strlen(s);

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
