#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string
 *
 * Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1 = 0, l2 = 0, i, j;
	char *cnctd;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	 l1 = 0, l2 = 0;

	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}

	cnctd = (char *)malloc((l1 + l2 + 1) * sizeof(char));

	if (cnctd == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		cnctd[i] = s1[i];
	}
	for (j = 0; j < l2; j++)
	{
		cnctd[i++] = s2[j];
	}

	cnctd[i] = '\0';
	return (cnctd);
}
