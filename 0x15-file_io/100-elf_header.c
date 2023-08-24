#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string to stdout
 * @str: The string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
}

/**
 * print_hex - prints a number in hexadecimal
 * @n: The number to print
 */
void print_hex(unsigned int n)
{
	char hex[] = "0123456789abcdef";

	if (n > 15)
		print_hex(n >> 4);
	_putchar(hex[n & 0xf]);
}


/**
 * print_elf_header - prints the ELF header information
 * @header: Pointer to the ELF header
 */
void print_elf_header(Elf64_Ehdr *header)
{
	_puts("ELF Header:\n");
	print_elf_ident(header);
	print_elf_class(header);
	print_elf_data(header);
	print_elf_version(header);
	print_elf_osabi(header);
}
/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		_puts("Usage: ");
		_puts(argv[0]);
		_puts(" elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		_puts("Error: Cannot open file ");
		_puts(argv[1]);
		_putchar('\n');
		exit(98);
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		_puts("Error: Cannot read file ");
		_puts(argv[1]);
		_putchar('\n');
		close(fd);
		exit(98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 ||
	header.e_ident[EI_MAG3] != ELFMAG3)
	{
		_puts("Error: Not an ELF file - ");
		_puts(argv[1]);
		_putchar('\n');
		close(fd);
		exit(98);
	}
	print_elf_ident(&header);
	return (0);
}
