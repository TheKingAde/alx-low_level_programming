#include "main.h"
#include <stdlib.h>
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little
 */
int get_endianness(void)
{
	union my_union data;

	data.integer_value = 0x01020304;
	if (data.bytes[0] == 0x04)
		return (1);
	else
		return (0);
}
