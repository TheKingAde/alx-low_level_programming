#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#define IS_ELF(header) (header.e_ident[EI_MAG0] == ELFMAG0 && \
			header.e_ident[EI_MAG1] == ELFMAG1 && \
			header.e_ident[EI_MAG2] == ELFMAG2 && \
			header.e_ident[EI_MAG3] == ELFMAG3)
/**
 * print_magic - Prints the magic number of an ELF header
 * @header: Pointer to ELF header
 */
void print_magic(Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints the class of an ELF header
 * @header: Pointer to ELF header
 */
void print_class(Elf64_Ehdr *header)
{
	printf("  Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("Invalid class\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
			break;
	}
}

/**
 * print_data - Prints the data encoding of an ELF header
 * @header: Pointer to ELF header
 */
void print_data(Elf64_Ehdr *header)
{
	printf("  Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("Invalid data encoding\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_ident[EI_DATA]);
			break;
	}
}

/**
 * print_version - Prints the version of an ELF header
 * @header: Pointer to ELF header
 */
void print_version(Elf64_Ehdr *header)
{
	printf("  Version:                           ");
	switch (header->e_ident[EI_VERSION])
	{
		case EV_NONE:
			printf("Invalid version\n");
			break;
		case EV_CURRENT:
			printf("%d (current)\n", header->e_ident[EI_VERSION]);
			break;
		default:
			printf("%d\n", header->e_ident[EI_VERSION]);
			break;
	}
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header
 * @header: Pointer to ELF header
 */
void print_osabi(Elf64_Ehdr *header)
{
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Sun Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("SGI Irix\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("Compaq TRU64 UNIX\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone (embedded) application\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_abiversion - Prints the ABI version of an ELF header
 * @header: Pointer to ELF header
 */
void print_abiversion(Elf64_Ehdr *header)
{
	printf("  ABI Version:                       %d\n",
			header->e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF file
 * @header: Pointer to ELF header
 */
void print_type(Elf64_Ehdr *header)
{
	printf("  Type:                              ");
	switch (header->e_type)
	{
		case ET_NONE:
			printf("No file type\n");
			break;
		case ET_REL:
			printf("Relocatable file\n");
			break;
		case ET_EXEC:
			printf("Executable file\n");
			break;
		case ET_DYN:
			printf("Shared object file\n");
			break;
		case ET_CORE:
			printf("Core file\n");
			break;
		default:
			if (header->e_type >= ET_LOPROC)
				printf("Processor-specific\n");
			else
				printf("<unknown: %x>\n", header->e_type);
			break;
	}
}

/**
 * print_entry - Prints the entry point address of an ELF file
 * @header: Pointer to ELF header
 */
void print_entry(Elf64_Ehdr *header)
{
	printf("  Entry point address:               %#lx\n", header->e_entry);
}
/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		exit(98);
	}
	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		close(fd);
		exit(98);
	}
	if (bytes_read != sizeof(header) || !IS_ELF(header))
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
		close(fd);
		exit(98);
	}

	printf("ELF Header:\n");
	print_magic(&header);
	print_class(&header);
	print_data(&header);
	print_version(&header);
	print_osabi(&header);
	print_abiversion(&header);
	print_type(&header);
	print_entry(&header);
	close(fd);
	return (0);
}

