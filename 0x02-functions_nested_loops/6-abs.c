#include "main.h"
#include <stdio.h>
/**
 * _abs - Entry point
 * @n: The integer to be computed
 *
 * Return: absolute value
 */
int _abs(int n)
{
	int result;

	if (n < 0)
	{
		result = -n;
	} else
	{
		result = n;
	}
	return (result);

}
