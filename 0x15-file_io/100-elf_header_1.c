#include "main.h"

/**
 * print_elf_ident - prints the ELF identification bytes
 * @header: Pointer to the ELF header
 */
void print_elf_ident(Elf64_Ehdr *header)
{
	int i;

	_puts("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		print_hex(header->e_ident[i]);
		_putchar(' ');
	}
	_putchar('\n');
}

/**
 * print_elf_class - prints the ELF class
 * @header: Pointer to the ELF header
 */
void print_elf_class(Elf64_Ehdr *header)
{
	_puts("  Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			_puts("none\n");
			break;
		case ELFCLASS32:
			 _puts("ELF32\n");
			break;
		case ELFCLASS64:
			_puts("ELF64\n");
			break;
		default:
			_puts("<unknown: ");
			print_hex(header->e_ident[EI_CLASS]);
			_puts(">\n");
			break;
	}
}

/**
 * print_elf_data - prints the ELF data encoding
 * @header: Pointer to the ELF header
 */
void print_elf_data(Elf64_Ehdr *header)
{
	_puts("  Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATANONE:
			_puts("none\n");
			break;
		case ELFDATA2LSB:
			_puts("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			_puts("2's complement, big endian\n");
			break;
		default:
			_puts("<unknown: ");
			print_hex(header->e_ident[EI_DATA]);
			_puts(">\n");
			break;
	}
}

/**
 * print_elf_version - prints the ELF version
 * @header: Pointer to the ELF header
 */
void print_elf_version(Elf64_Ehdr *header)
{
	_puts("  Version:                           ");
	switch (header->e_ident[EI_VERSION])
	{
		case EV_NONE:
			_putchar('0');
			break;
		case EV_CURRENT:
			print_hex(header->e_ident[EI_VERSION]);
			_puts(" (current)");
			break;
		default:
			print_hex(header->e_ident[EI_VERSION]);
			break;
	}
	_putchar('\n');
}

/**
 * print_elf_osabi - prints the ELF OS/ABI identification
 * @header: Pointer to the ELF header
 */
void print_elf_osabi(Elf64_Ehdr *header)
{
	_puts("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			_puts("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			_puts("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			_puts("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			_puts("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			_puts("Sun Solaris\n");
			break;
		case ELFOSABI_IRIX:
			_puts("SGI Irix\n");
			break;
		case ELFOSABI_FREEBSD:
			_puts("FreeBSD\n");
			break;
		default:
			_puts("<unknown: ");
			print_hex(header->e_ident[EI_OSABI]);
			_puts(">\n");
			break;
	}
}

