#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: count
 *
 * Return: char pointer otherwise fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2;
	unsigned int i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = 0;
	while (s1[length1] != '\0')
		length1++;

	length2 = 0;
	while (s2[length2] != '\0')
		length2++;

	if (n > length2)
		n = length2;

	concat = malloc(sizeof(char) * (length1 + n + 1));

	if (concat == NULL)
		exit(EXIT_FAILURE);
	for (i = 0; i < length1; i++)
		concat[i] = s1[i];
	for (j = 0; j < n; j++)
		concat[i++] = s2[j];

	concat[i] = '\0';
	return (concat);
}
