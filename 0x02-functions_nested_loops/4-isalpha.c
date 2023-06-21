#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: The character to be checked
 *
 * Return: 1 if the character is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	int result;

	if (isalpha(c))
		result = 1;
	else
		result = 0;

	return (result);
}
