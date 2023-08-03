#include "main.h"
#include <stdlib.h>

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int bit, i;

	/* check if b is NULL */
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if(b[i] != '0' && b[i] != '1')
			return (0);
		bit = b[i] - '0';
		result = (result << 1) | bit;
	}
	return (result);
}
