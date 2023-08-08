#include "main.h"
#define BUFF_SIZE 1024
/**
 * copy_file - copies the content of a file to another file
 * @src_filename: pointer to the source file
 * @dest_filename: pointer to the destination file
 *
 * Return: 0 if success otherwise if fail
 */
int copy_file(const char *src_filename, const char *dest_filename)
{
	int fd_from, fd_to, readBytes, writtenBytes;
	char buffer[BUFF_SIZE];

	fd_from = open(src_filename, O_RDONLY);
	if (fd_from == -1)
		return (98);

	fd_to = open(dest_filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		return (99);
	}

	while ((readBytes = read(fd_from, buffer, BUFF_SIZE)) > 0)
	{
		writtenBytes = write(fd_to, buffer, readBytes);
		if (writtenBytes == -1)
		{
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}
	if (readBytes == -1)
	{
		close(fd_from);
		close(fd_to);
		return (98);
	}

	close(fd_from);
	close(fd_to);
	return (0);
}
/**
 * main - Entry
 * @argc: first argument
 * @argv: second argument
 *
 * Return: 0 if success otherwie fail
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	result = copy_file(argv[1], argv[2]);
	if (result != 0)
	{
		if (result == 98)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		else if (result == 99)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (result);
	}
	return (0);
}
