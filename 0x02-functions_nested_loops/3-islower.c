#include "main.h"

/**
 * _islower - Entry point
 *@c: The character to be checked
 *
 * Return: 1 if lowercase and 0 if otherwise (Success)
 */

int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	} else
	{
		result = 0;
	}
	return (result);
}
