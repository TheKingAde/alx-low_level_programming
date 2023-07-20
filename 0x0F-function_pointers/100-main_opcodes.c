#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - print opr code of main func
 * @num_bytes: number bytes
 *
 */
void print_opcodes(int num_bytes)
{
	int i;
	unsigned char *opcodes;

	opcodes = (unsigned char *)print_opcodes;

	for (i = 0; i < num_bytes; i++)
		printf("%02x ", opcodes[i]);
	printf("\n");
}

/**
 * main - Entry
 * @argc: char arg
 * @argv: array of char
 *
 * Return: 0 if success otherwise fail
 */
int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(num_bytes);
	return (0);
}
