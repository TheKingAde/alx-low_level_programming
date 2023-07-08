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
	int index = 0;
	int sign = 1;
	int res = 0;

	while (s[index] != '\0')
	{
	if (s[index] == '-')
		sign *= -1;
	else if (s[index] >= '0' && s[index] <= '9')
	{
		res *= 10;
		res += sign * (s[index] - '0');
	}
	else if (res != 0)
	{
		break;
		index++;
	}
	}
	return (res);
}
